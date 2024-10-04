#include <gtest/gtest.h>
#include <vector>
#include <sstream>
#include "../../include/signal_processing/strategy_engine.hpp"

TEST(StrategyEngineTest, MovingAverage) {
    std::vector<double> prices = {100.5, 100.2, 102.0, 98.8, 97.7, 100.3, 101.1, 102.4, 103.5, 104.0};

    ASSERT_NO_THROW({
        double avg = StrategyEngine::movingAverage(prices, 8);
        EXPECT_NEAR(avg, 101.275, 0.1);
    });
}