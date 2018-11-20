#include <iostream>

int main() {
    std::string name = "BurgAkos";
    int age = 20;
    double height = 192;
    bool Married = false;

    std::cout << name << std::endl;

    std::cout << std::boolalpha << Married << std::endl;

    std::cout << age << std::endl;

    std::cout << height << std::endl;
    return 0;
}