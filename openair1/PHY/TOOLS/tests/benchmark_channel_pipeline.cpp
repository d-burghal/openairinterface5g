/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstdint>
#include <vector>
#include <time.h>
#include <getopt.h>
#include "oai_cuda.h"
#include "common/config/config_userapi.h"
#include <memory>
#include "benchmark/benchmark.h"
#include "test_channel_pipeline_tools.h"
#include "channel_pipeline.h"
extern "C" {
#include "openair1/SIMULATION/TOOLS/sim.h"
}
configmodule_interface_t *uniqCfg = NULL;

static constexpr double sample_rate_msps = 122.88;

extern "C" void exit_function(const char *file, const char *function, const int line, const char *s, const int assert)
{
  fprintf(stderr, "FATAL: %s at %s:%s:%d\n", s, file, function, line);
  exit(EXIT_FAILURE);
}

static uint64_t monotonic_time_ns()
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (uint64_t)ts.tv_sec * 1000000000ULL + ts.tv_nsec;
}

static void set_channel_benchmark_counters(benchmark::State &state,
                                           uint64_t total_wall_ns,
                                           int nb_tx,
                                           int nb_rx,
                                           int num_samples,
                                           int channel_length)
{
  const double iterations = state.iterations();
  const double slot_wall_us = iterations > 0 ? (double)total_wall_ns / iterations / 1000.0 : 0.0;
  const double slot_budget_us = (double)num_samples / sample_rate_msps;
  const double output_msps = slot_wall_us > 0.0 ? (double)num_samples * nb_rx / slot_wall_us : 0.0;
  const double link_msps = output_msps * nb_tx;
  const double cmac_gps = link_msps * channel_length / 1000.0;

  state.counters["SlotWallUs"] = slot_wall_us;
  state.counters["SlotBudgetUs"] = slot_budget_us;
  state.counters["RTFactor"] = slot_wall_us > 0.0 ? slot_budget_us / slot_wall_us : 0.0;
  state.counters["RadioMSPS"] = sample_rate_msps;
  state.counters["OutMSPSWall"] = output_msps;
  state.counters["LinkMSPSWall"] = link_msps;
  state.counters["CMACGWall"] = cmac_gps;
}

#ifdef CHANNEL_SIM_CUDA
static void BM_channel_convolution_gpu(benchmark::State &state)
{
  int nb_rx = state.range(0);
  int nb_tx = state.range(1);
  int num_samples = state.range(2);
  int channel_length = 16;

  size_t num_input_samples = num_samples + channel_length - 1;
  std::vector<c16_t *> input(nb_tx);
  for (int i = 0; i < nb_tx; ++i) {
    input[i] = new c16_t[num_input_samples];
  }

  std::vector<c16_t *> output(nb_rx);
  for (int i = 0; i < nb_rx; ++i) {
    output[i] = new c16_t[num_samples];
  }

  std::vector<cf_t *> channel(nb_rx * nb_tx);
  for (int i = 0; i < nb_rx * nb_tx; ++i) {
    channel[i] = new cf_t[channel_length];
  }

  for (int i = 0; i < nb_rx * nb_tx; ++i) {
    generate_random_signal_float(channel[i], channel_length);
  }

  void *gpu_context = cuda_channel_pipeline_init(61440 * 4);

  for (int aatx = 0; aatx < nb_tx; aatx++) {
    generate_random_signal(input[aatx], num_input_samples);
  }

  uint64_t total_wall_ns = 0;
  for (auto _ : state) {
    uint64_t start_ns = monotonic_time_ns();
    cuda_channel_pipeline(gpu_context,
                          (const cf_t **)channel.data(),
                          (const c16_t **)input.data(),
                          nullptr,
                          num_input_samples,
                          output.data(),
                          nullptr,
                          num_samples,
                          num_samples,
                          channel_length,
                          nb_tx,
                          nb_rx,
                          0.0f);
    total_wall_ns += monotonic_time_ns() - start_ns;
  }
  set_channel_benchmark_counters(state, total_wall_ns, nb_tx, nb_rx, num_samples, channel_length);

  cuda_channel_pipeline_shutdown(gpu_context);
}
#endif

static void BM_channel_convolution_cpu(benchmark::State &state)
{
  int nb_rx = state.range(0);
  int nb_tx = state.range(1);
  int num_samples = state.range(2);
  int channel_length = 16;

  size_t num_input_samples = num_samples + channel_length - 1;
  std::vector<c16_t *> input(nb_tx);
  for (int i = 0; i < nb_tx; ++i) {
    input[i] = new c16_t[num_input_samples];
  }

  std::vector<c16_t *> output(nb_rx);
  for (int i = 0; i < nb_rx; ++i) {
    output[i] = new c16_t[num_samples];
  }

  std::vector<cf_t *> channel(nb_rx * nb_tx);
  for (int i = 0; i < nb_rx * nb_tx; ++i) {
    channel[i] = new cf_t[channel_length];
  }

  for (int i = 0; i < nb_rx * nb_tx; ++i) {
    generate_random_signal_float(channel[i], channel_length);
  }
  for (int aatx = 0; aatx < nb_tx; aatx++) {
    generate_random_signal(input[aatx], num_input_samples);
  }

  uint64_t total_wall_ns = 0;
  for (auto _ : state) {
    uint64_t start_ns = monotonic_time_ns();
    channel_convolution_cpu((const cf_t **)channel.data(),
                            (const c16_t **)input.data(),
                            nullptr,
                            num_input_samples,
                            output.data(),
                            nullptr,
                            num_samples,
                            num_samples,
                            channel_length,
                            nb_tx,
                            nb_rx);
    total_wall_ns += monotonic_time_ns() - start_ns;
  }
  set_channel_benchmark_counters(state, total_wall_ns, nb_tx, nb_rx, num_samples, channel_length);

  for (int i = 0; i < nb_tx; ++i)
    delete[] input[i];
  for (int i = 0; i < nb_rx * nb_tx; ++i)
    delete[] channel[i];
  for (int i = 0; i < nb_rx; ++i) {
    delete[] output[i];
  }
}

static void BM_channel_convolution_tpool(benchmark::State &state)
{
  int nb_rx = state.range(0);
  int nb_tx = state.range(1);
  int num_samples = state.range(2);
  int channel_length = 16;

  size_t num_input_samples = num_samples + channel_length - 1;
  std::vector<c16_t *> input(nb_tx);
  for (int i = 0; i < nb_tx; ++i) {
    input[i] = new c16_t[num_input_samples];
  }

  std::vector<c16_t *> output(nb_rx);
  for (int i = 0; i < nb_rx; ++i) {
    output[i] = new c16_t[num_samples];
  }

  std::vector<cf_t *> channel(nb_rx * nb_tx);
  for (int i = 0; i < nb_rx * nb_tx; ++i) {
    channel[i] = new cf_t[channel_length];
  }

  for (int i = 0; i < nb_rx * nb_tx; ++i) {
    generate_random_signal_float(channel[i], channel_length);
  }
  for (int aatx = 0; aatx < nb_tx; aatx++) {
    generate_random_signal(input[aatx], num_input_samples);
  }

  void *tpool = init_tpool(16);
  channel_pipeline_init(0.0f);

  uint64_t total_wall_ns = 0;
  for (auto _ : state) {
    uint64_t start_ns = monotonic_time_ns();
    channel_pipeline(tpool,
                     (const cf_t **)channel.data(),
                     (const c16_t **)input.data(),
                     nullptr,
                     num_input_samples,
                     output.data(),
                     nullptr,
                     num_samples,
                     num_samples,
                     channel_length,
                     nb_tx,
                     nb_rx,
                     0.0f);
    total_wall_ns += monotonic_time_ns() - start_ns;
  }
  set_channel_benchmark_counters(state, total_wall_ns, nb_tx, nb_rx, num_samples, channel_length);

  channel_pipeline_shutdown();

  destroy_tpool(tpool);

  for (int i = 0; i < nb_tx; ++i)
    delete[] input[i];
  for (int i = 0; i < nb_rx * nb_tx; ++i)
    delete[] channel[i];
  for (int i = 0; i < nb_rx; ++i) {
    delete[] output[i];
  }
}

#ifdef CHANNEL_SIM_CUDA
BENCHMARK(BM_channel_convolution_gpu)
    ->ArgsProduct({
        {1, 2, 4, 16, 64}, // nb_rx
        {1, 2, 4, 16, 64}, // nb_tx
        {61440}, // num_samples
    })
    ->Iterations(100);
#endif

BENCHMARK(BM_channel_convolution_cpu)
    ->ArgsProduct({
        {1, 2, 4}, // nb_rx
        {1, 2, 4}, // nb_tx
        {61440}, // num_samples
    })
    ->Iterations(50);

BENCHMARK(BM_channel_convolution_tpool)
    ->ArgsProduct({
        {1, 2, 4, 8, 16}, // nb_rx
        {1, 2, 4, 8, 16}, // nb_tx
        {61440}, // num_samples
    })
    ->Iterations(50);

int main(int argc, char **argv)
{
  logInit();
  randominit();
  benchmark::Initialize(&argc, argv);
  benchmark::RunSpecifiedBenchmarks();
  return 0;
}
