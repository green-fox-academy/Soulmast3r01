#include <iostream>

int main() {
    int numbers[4] = {4,5,6,7};
    for (int i = 0; i < sizeof(numbers) / numbers[0]; ++i) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}