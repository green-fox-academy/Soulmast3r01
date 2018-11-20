#include <iostream>

int main() {

    int a;


    std::cout << "Give a number"  << std::endl;

    std::cin >> a;

    if( a % 2 == 0) {
        std::cout << "This number is even" << std::endl;
    }
    else {
        std::cout << "This number is odd" << std::endl;
    }
    return 0;
}