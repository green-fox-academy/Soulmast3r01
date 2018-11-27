#include <iostream>
#include <string>

int main() {
    std::string animals[3] = {"koal","pand","zebr"};
    for (int i = 0; i < 3; i++)
        std::cout << animals[i] + "a " << "\n";
    return 0;
}