#include <iostream>

int main() {
    int a[4][4];
    int lenght = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < lenght; j++) {
            if (a[i] == a[j]) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
