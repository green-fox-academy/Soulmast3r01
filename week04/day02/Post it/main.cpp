#include <iostream>
#include "PostIt.h"
int main() {

    Postit baba("orange", "Idea1", "blue");

    std::cout << baba.getBackgroundColor() << " " << baba.getText() << " " << baba.getTextColor() << std::endl;

    Postit baba1("pink", "Awesome", "black");

    std::cout << baba1.getBackgroundColor() << " " << baba1.getText() << " " << baba1.getTextColor() << std::endl;

    Postit baba2("yellow", "Superb", "green");

    std::cout << baba2.getBackgroundColor() << " " << baba2.getText() << " " << baba2.getTextColor() << std::endl;
    return 0;
}