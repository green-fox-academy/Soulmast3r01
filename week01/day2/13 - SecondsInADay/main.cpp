#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;


   int nowsec = currentMinutes * 60 + currentHours * 3600 + currentSeconds;

   int allday = 86400;

   int remainingsec = allday - nowsec;





    std::cout << remainingsec << std::endl;
    return 0;
}