#include <iostream>

int main() {
    int a = 123;
    int b = 526;
    int c = a;
     a = b;
    b = c;

    std::cout << b << std::endl;

    std::cout << a << std::endl;
    return 0;
}