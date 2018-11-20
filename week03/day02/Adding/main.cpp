#include <iostream>

int main() {

    int a = 20;
    int b = 17;
    int *aPontier = & a;
    int *bPontier = & b;

    int result =  *bPontier + *aPontier;

    int result1 = *bPontier - *aPontier;


    std::cout << result << std::endl;
    std::cout << result1 << std::endl;

    return 0;
}