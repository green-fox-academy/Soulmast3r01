#include <iostream>

int main() {
    std::string abc[3] = {"first", "second", "third"};
    abc[1] = abc[0];
    std::cout << abc[1] << std::endl;
    return 0;
}