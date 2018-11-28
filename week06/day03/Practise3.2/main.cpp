#include <iostream>

int main() {
    int aj[5] = {3,4,5,6,7};
    for (int i = 4; i < sizeof(aj) / aj[1]; --i) {
        std::cout << aj[i] << std::endl;
    }

    return 0;
}