#include <iostream>
#include <cstdlib>
#include "include/signal_processing/strategy_engine.hpp"

int main(int argc, char *argv[]) {
    std::cout << "Начало работы!" << '\n';
    if (argc != 11) {
        std::cerr << "Данные должны быть представлены только за первые 10 секунд\n";
        return 1;
    }

    size_t time = 8;
    std::vector<double> prices;
    prices.reserve(argc);
    for (int i = 0; i < argc; ++i) {
        double tick = std::atoi(argv[i]);
        prices.push_back(tick);
    }

    double avg = StrategyEngine::movingAverage(prices, time);
    std::cout << "Скользящее среднее для введённых значений" << '\n'
              << avg;
    return 0;
}