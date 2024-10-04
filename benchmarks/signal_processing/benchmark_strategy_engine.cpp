#include <benchmark/benchmark.h>
#include <vector>
#include "../../include/signal_processing/strategy_engine.hpp"

static void BM_MovingAverage(benchmark::State& state) {
    std::vector<double> prices = {100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0,
                                  100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0};

    for (auto _ : state) {
        StrategyEngine::movingAverage(prices, 85);
    }
}

BENCHMARK(BM_MovingAverage)->Unit(benchmark::kMicrosecond);
BENCHMARK_MAIN();
