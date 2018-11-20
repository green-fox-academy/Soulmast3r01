#include <iostream>
int Power (int firstNum, int secondNum);
int main() {
    int firstNum;
    int secondNum;

    std::cout << "Give me a number" << std::endl;
    std::cin >> firstNum;
    std::cout << "Give me a second number" << std::endl;
    std::cin >> secondNum;
    std::cout << Power(firstNum, secondNum) << std::endl;
}

    int Power(int firstNum, int secondNum) {
    if(secondNum == 0){
        return 1;
    }
    else {
        return firstNum * Power(firstNum, secondNum - 1);
    }
    }
