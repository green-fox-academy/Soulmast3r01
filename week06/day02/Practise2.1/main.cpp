#include <iostream>

int main() {
    int a = 15;
    int b = 23;
    int temp;
    std::cout << a << " "<< b << std::endl;
    temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}