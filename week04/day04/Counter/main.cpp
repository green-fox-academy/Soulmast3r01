#include <iostream>


int countdown(int y)
{
    std::cout << y << std::endl;
    if (y<=1)
    {
        return 0;
    }
    else
    {
        return countdown(y-1);
    }
}

int main() {
    std::cout << "Countdown from ten: " << std::endl;

    std::cout << countdown(10) << std::endl;
}