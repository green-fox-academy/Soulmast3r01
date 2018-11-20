#include <iostream>

int main() {

    float a;
    float b;
    float c;
    float d;
    float e;

   std::cout << "Give me five numbers" << std::endl;

   std::cin >> a >> b >> c >> d >> e;

   std::cout << a + b + c + d + e << " Here is the sum of them" << std::endl;

   std::cout << (a + b + c + d + e) / 5 << " Here is the average of them " << std::endl;

   std::cout << "Thx by" << std::endl;


    return 0;
}