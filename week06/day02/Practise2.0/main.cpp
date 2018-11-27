#include <iostream>
int factorio(int numbers);
int main() {
    int x;
    std::cout << "Give me a number" << std::endl;
    std::cin >> x;
    std::cout << "The factorial of the number is " << factorio(x) << std::endl;
    return 0;
}
int factorio (int numbers)
{
    if (numbers == 0) {
        return 1;
    }
    return numbers*factorio(numbers-1);
}