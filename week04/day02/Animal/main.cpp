#include <iostream>
#include "animal.h"
int main() {
    Animal lion;
    lion.Eat();
    lion.Drink();
    lion.Play();
    std::cout << lion.getHunger() << std::endl;
    std::cout << lion.getThirts() << std::endl;
    std::cout << lion.getHunger() <<std::endl << lion.getThirts() << std::endl;
}