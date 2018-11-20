#include <iostream>

int main() {
    float kilometer;
    float mile;

    std::cout << "How many kilometers do you want to change to miles?" << std::endl;

    std::cin >> kilometer;
    mile = kilometer * 0.62;



    std::cout << mile;

std::cout << "Do u want to revesre it" <<std::endl;
    std::cin >> mile;

    kilometer = mile / 0.62;

    std::cout << kilometer <<std::endl;




    return 0;
}