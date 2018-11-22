#include "apple.h"

std::string getApple()
{
    return "apple";
}

int getSum(std::vector<int> summa) {
    int sum = 0;
     for(int i = 0; i < summa.size(); i ++){
        sum = sum + summa[i];
     }
    return sum;
}
