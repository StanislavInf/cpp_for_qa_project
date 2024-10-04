#include <gtest/gtest.h>
#include "../include/square.h"

TEST(Add, Square) {
    EXPECT_EQ(square(2, 2), 4);
    EXPECT_EQ(square(2, 3), square(3, 2));
    EXPECT_EQ(square(-1, 3), -3);
}