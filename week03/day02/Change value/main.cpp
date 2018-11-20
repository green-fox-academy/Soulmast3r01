#include <iostream>

int main() {
    float* tempPointer;
    float temperature = 21.3;
    tempPointer = & temperature;
    *tempPointer = 25.8;


    std::cout << temperature << std::endl;

    return 0;
}




