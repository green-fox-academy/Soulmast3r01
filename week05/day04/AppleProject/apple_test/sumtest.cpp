#include <gtest/gtest.h>
#include "apple.h"
#include <vector>
TEST(apple_check, test_apple){
    std::vector<int> summa ={};
    ASSERT_EQ(getSum(summa),22 );
}
