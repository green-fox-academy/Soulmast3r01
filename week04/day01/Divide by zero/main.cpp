#include <iostream>
#include <fstream>
int numberDivide (int a);
int main() {
    std::cout << "Give a number" << std::endl;

    try {
        int a;
        std::cin >> a;

        if (a == 0) {
            throw std::string ("Can't divide by 0");
        }
        std::cout << numberDivide(a) << std::endl;
    } catch (std::string& e) {
        std::cout << e << std::endl;



    }
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    return 0;

}

int numberDivide (int a){

    return 10 / a;
}