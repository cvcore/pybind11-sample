#include "gtest/gtest.h"
#include "samplelib_cpp/mean.h"

TEST(MeanTest, CalcMean) {
    EXPECT_EQ(mean({1, 2, 3, 4, 5}), 3.0);
}
