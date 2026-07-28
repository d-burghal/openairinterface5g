#!/usr/bin/env bash
# GPU vs CPU vrtsim test matrix runner, GH200 server version.
# Antenna pairs: gNB scales up, UE is capped at 4x4 above the symmetric 4x4 range.
set -uo pipefail

BASE_DIR="${BASE_DIR:-$HOME/oai-testing/openairinterface5g/cmake_targets}"
LOG_DIR="${LOG_DIR:-$HOME/oai-testing/logs}"
CIRDB_DIR="${CIRDB_DIR:-$HOME/oai-testing/raytracing-channel-emulator/server/external_taps}"

GNB_CONF="${GNB_CONF:-../../ci-scripts/conf_files/gnb.sa.band78.106prb.vrtsim.2x2.yaml}"
UE_CONF="${UE_CONF:-../../ci-scripts/conf_files/nrue.vrtsim.chanmod.yaml}"

BUILD_DIRS=("build_gpu" "build_cpu")
BUILD_NAMES=("gpu" "cpu")

# gNB antenna count : UE antenna count.
# Symmetric through 4x4, then gNB scales while UE stays fixed at 4.
declare -A UE_ANT=(["1"]="1" ["2"]="2" ["4"]="4" ["8"]="4" ["16"]="4" ["32"]="4" ["64"]="4")
GNB_ANTENNAS=("1" "2" "4" "8" "16" "32" "64")

declare -A CHANLEN_YAML=(["short"]="cir_db_short.yaml" ["long"]="cir_db_long.yaml")
declare -A CHANLEN_BIN=(["short"]="cir_db_short.bin" ["long"]="cir_db_long.bin")
declare -A CHANLEN_DS=(["short"]="10.0" ["long"]="30.0")
CHANLENS=("short" "long")

RUNS_PER_CONFIG="${RUNS_PER_CONFIG:-1}"
GNB_LEAD_SECONDS="${GNB_LEAD_SECONDS:-5}"
RUN_DURATION_SECONDS="${RUN_DURATION_SECONDS:-60}"
MODEL_ID="${MODEL_ID:-1}"
SPEED_MPS="${SPEED_MPS:-1.5}"
CARRIER_FREQ="${CARRIER_FREQ:-3319680000}"

mkdir -p "$LOG_DIR"

run_one() {
  local build_dir="$1"
  local build_name="$2"
  local gnb_ant="$3"
  local chanlen="$4"
  local run_num="$5"

  local ue_ant="${UE_ANT[$gnb_ant]}"
  local antenna_tag="${gnb_ant}x${ue_ant}"
  local ports="$ue_ant"

  local tag="${build_name}_${antenna_tag}_${chanlen}_${run_num}"
  local gnb_log="${LOG_DIR}/${tag}_gnb.log"
  local ue_log="${LOG_DIR}/${tag}_ue.log"
  local cirdb_yaml="${CIRDB_DIR}/${CHANLEN_YAML[$chanlen]}"
  local cirdb_bin="${CIRDB_DIR}/${CHANLEN_BIN[$chanlen]}"
  local ds_ns="${CHANLEN_DS[$chanlen]}"

  echo "=== Running: build=$build_name channel=${antenna_tag} gNB=${gnb_ant}x${gnb_ant} UE=${ue_ant}x${ue_ant} chanlen=$chanlen run=$run_num ==="

  local gnb_session="vrtsim_${tag}_gnb"
  local ue_session="vrtsim_${tag}_ue"

  tmux kill-session -t "$gnb_session" 2>/dev/null
  tmux kill-session -t "$ue_session" 2>/dev/null

  tmux new-session -d -s "$gnb_session" bash -c "
    cd '${BASE_DIR}/${build_dir}' && \
    sudo ./nr-softmodem \
      -O ${GNB_CONF} \
      --device.name vrtsim \
      --vrtsim.role server \
      --vrtsim.num_ues 1 \
      --gNBs.[0].min_rxtxtime 8 \
      --vrtsim.cirdb 1 \
      --vrtsim.cirdb_yaml ${cirdb_yaml} \
      --vrtsim.cirdb_file ${cirdb_bin} \
      --vrtsim.cirdb_model_id ${MODEL_ID} \
      --vrtsim.cirdb_ds_ns ${ds_ns} \
      --vrtsim.cirdb_speed_mps ${SPEED_MPS} \
      --RUs.[0].nb_tx ${gnb_ant} --RUs.[0].nb_rx ${gnb_ant} \
      --gNBs.[0].pusch_AntennaPorts ${ports} \
      --gNBs.[0].pdsch_AntennaPorts_XP ${ports} \
      --vrtsim.ue_config.[0].antennas ${ue_ant}x${ue_ant} \
      --vrtsim.ue_config.[0].model_id ${MODEL_ID} \
      --vrtsim.ue_config.[0].ds_ns ${ds_ns} \
      --vrtsim.ue_config.[0].speed_mps ${SPEED_MPS} \
      2>&1 | (trap '' INT; exec tee '${gnb_log}')
  "

  sleep "$GNB_LEAD_SECONDS"

  tmux new-session -d -s "$ue_session" bash -c "
    cd '${BASE_DIR}/${build_dir}' && \
    sudo ./nr-uesoftmodem \
      -O ${UE_CONF} \
      -C ${CARRIER_FREQ} -r 106 --numerology 1 --ssb 516 --band 78 \
      --device.name vrtsim \
      --vrtsim.role client \
      --ue-nb-ant-tx ${ue_ant} --ue-nb-ant-rx ${ue_ant} \
      2>&1 | (trap '' INT; exec tee '${ue_log}')
  "

  sleep "$RUN_DURATION_SECONDS"

  tmux send-keys -t "$gnb_session" C-c
  sleep 1
  tmux send-keys -t "$ue_session" C-c
  sleep 1
  tmux send-keys -t "$ue_session" C-c

  local waited=0
  local max_wait=30
  while tmux has-session -t "$gnb_session" 2>/dev/null || tmux has-session -t "$ue_session" 2>/dev/null; do
    sleep 1
    waited=$((waited + 1))
    if [ "$waited" -ge "$max_wait" ]; then
      echo "    !! timed out waiting for shutdown after ${max_wait}s, forcing kill"
      break
    fi
  done

  tmux kill-session -t "$gnb_session" 2>/dev/null
  tmux kill-session -t "$ue_session" 2>/dev/null

  echo "    -> logs: $gnb_log , $ue_log"
}

for chanlen in "${CHANLENS[@]}"; do
  for gnb_ant in "${GNB_ANTENNAS[@]}"; do
    for i in "${!BUILD_DIRS[@]}"; do
      build_dir="${BUILD_DIRS[$i]}"
      build_name="${BUILD_NAMES[$i]}"
      for run_num in $(seq 1 "$RUNS_PER_CONFIG"); do
        run_one "$build_dir" "$build_name" "$gnb_ant" "$chanlen" "$run_num"
      done
    done
  done
done

echo "=== All runs complete. Logs in ${LOG_DIR} ==="
