#include "../../include/signal_processing/strategy_engine.hpp"
#include <numeric>
#include <vector>
#include <stdexcept>

double StrategyEngine::movingAverage(const std::vector<double>& prices, int period) {
    if (prices.size() < period || period == 0) {
        throw std::invalid_argument("Неверный период или недостаточно данных");
    }

    double sum = std::accumulate(prices.end() - period, prices.end(), 0.0);
    return sum / period;
}
