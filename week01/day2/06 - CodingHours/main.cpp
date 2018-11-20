#include <iostream>

int main() {
    int averagedailycodingtime = 6;
    int thesemester = 85;

    std::cout << averagedailycodingtime * thesemester  << std::endl;

    float averageworkinghoursweekly = 52;

    std::cout << (averagedailycodingtime * thesemester) / (averageworkinghoursweekly * 17)  << std::endl;
    return 0;
}