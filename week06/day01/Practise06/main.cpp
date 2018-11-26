#include <iostream>
int sum(int numbers);
int main() {
    int x;
    std::cout << "Give me a fuckin number" << std::endl;
    std::cin >> x;
    std::cout << sum(x) << std::endl;
    return 0;
}
int sum(int numbers){
    int y = 0;
    for (int i = 0; i <= numbers; i++ )
        y = y + i;
    return y;
}
