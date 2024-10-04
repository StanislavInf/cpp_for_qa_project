#pragma once
#include <vector>

/**
 * @class StrategyEngine
 * @brief Реализует торговые стратегии, такие как скользящее среднее
 */
class StrategyEngine {
public:
    /**
    * @brief Рассчитывает простое скользящее среднее заданного ценового ряда.
    *
    * @param prices Серия данных о ценах
    * @param period Период для расчета скользящего среднего
    * @return Рассчитанное скользящее среднее
    * @throws std::invalid_argument, если период недействителен или недостаточно цен
    */
    static double movingAverage(const std::vector<double>& prices, int period);
};