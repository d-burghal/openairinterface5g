# GPU vs CPU vrtsim Channel Emulation Testing

This directory contains the GH server test runner used to compare CPU and GPU vrtsim channel emulation. The matrix scales the gNB side up to 64 antennas while keeping the UE side capped at 4 antennas for the larger cases.

## 1. Clone

```bash
mkdir -p ~/oai-testing
cd ~/oai-testing

git clone -b gpu-vrtsim-64-gnb-antennas https://github.com/duranta-project/openairinterface5g.git
git clone https://gitlab.eurecom.fr/oai/raytracing-channel-emulator.git
```

If this branch has already been merged, clone `develop` instead.

## 2. Build

### GPU build

```bash
cd ~/oai-testing/openairinterface5g/cmake_targets
mkdir -p build_gpu
cd build_gpu

cmake ../.. -GNinja \
  -DCMAKE_BUILD_TYPE=RelWithDebInfo \
  -DOAI_VRTSIM_TAPS_CLIENT=OFF \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
  -DUSE_ATS_MEMORY=ON \
  -DENABLE_CHANNEL_SIM_CUDA=ON \
  -DENABLE_TESTS=ON \
  -DCMAKE_POSITION_INDEPENDENT_CODE=ON

cmake --build . --target \
  vrtsim rfsimulator nr-softmodem nr-uesoftmodem ldpc params_libconfig params_yaml \
  test_channel_pipeline benchmark_channel_pipeline test_channel_scalability \
  -j"$(nproc)"
```

### CPU build

```bash
cd ~/oai-testing/openairinterface5g/cmake_targets
mkdir -p build_cpu
cd build_cpu

cmake ../.. -GNinja \
  -DCMAKE_BUILD_TYPE=RelWithDebInfo \
  -DOAI_VRTSIM_TAPS_CLIENT=OFF \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
  -DENABLE_CHANNEL_SIM_CUDA=OFF \
  -DENABLE_TESTS=ON \
  -DCMAKE_POSITION_INDEPENDENT_CODE=ON

cmake --build . --target \
  vrtsim rfsimulator nr-softmodem nr-uesoftmodem ldpc params_libconfig params_yaml \
  test_channel_pipeline benchmark_channel_pipeline \
  -j"$(nproc)"
```

## 3. Generate the CIR Database

The automated matrix uses `1x1`, `2x2`, `4x4`, then gNB-heavy `8x4`, `16x4`, `32x4`, and `64x4` channel shapes. Generate both short and long delay-spread databases before running the matrix.

```bash
cd ~/oai-testing/raytracing-channel-emulator/server/external_taps

python3 cir_generator.py --out cir_db_short.bin \
  --models TDL-A TDL-B \
  --antennas 1x1 2x2 4x4 8x4 16x4 32x4 64x4 \
  --delay-spreads 10 \
  --speeds 1.5 \
  --snapshots 2000

python3 cir_generator.py --out cir_db_long.bin \
  --models TDL-A TDL-B \
  --antennas 1x1 2x2 4x4 8x4 16x4 32x4 64x4 \
  --delay-spreads 30 \
  --speeds 1.5 \
  --snapshots 2000 \
  --max-taps 32
```

## 4. Run the Automated Test Matrix

```bash
cd ~/oai-testing/openairinterface5g/gpu_acceleration_test

chmod +x run_vrtsim_gpu_cpu_matrix.sh
./run_vrtsim_gpu_cpu_matrix.sh
```

Logs are written to `~/oai-testing/logs` by default and named:

```text
<build>_<antenna>_<chanlen>_<run>_<gnb|ue>.log
```

For example, `gpu_64x4_long_1_gnb.log`.

The main runtime knobs can be overridden with environment variables:

```bash
RUN_DURATION_SECONDS=120 RUNS_PER_CONFIG=3 ./run_vrtsim_gpu_cpu_matrix.sh
```

## 5. Run the Isolated Channel-Convolution Benchmark

```bash
cd ~/oai-testing/openairinterface5g/cmake_targets/build_gpu
./openair1/PHY/TOOLS/tests/benchmark_channel_pipeline
```

The benchmark processes `61440` samples per call. At the `122.88 MSPS` sample-rate assumption, that is `500 us` of radio time. The most useful fields are:

- `SlotWallUs`: wall-clock time spent in one benchmark call.
- `SlotBudgetUs`: radio-time budget represented by the sample count.
- `RTFactor`: `SlotBudgetUs / SlotWallUs`; values above `1.0` are faster than real time.
- `OutMSPSWall`: output sample rate based on wall time.
- `LinkMSPSWall`: Tx/Rx link-sample rate based on wall time.
- `CMACGWall`: complex MAC rate based on wall time.

## 6. Copy Logs to a Local Machine

```bash
scp -o "ProxyJump=<user>@<jump-host>:<jump-port>" -r <user>@<server>:~/oai-testing/logs ./local-logs
```
