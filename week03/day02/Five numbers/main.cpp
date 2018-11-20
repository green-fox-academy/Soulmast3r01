#include <iostream>
int main(){
    int tomb [5];
    int* tombPointer = tomb;
    std::cout << "Enter five elements" << std::endl;
    for(int x = 0; x < 5; x++) {
        std::cin >> tomb[x];
        std::cout << *tombPointer + x << std::endl;
    }
    return 0;
}
