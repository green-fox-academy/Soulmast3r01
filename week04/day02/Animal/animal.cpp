#include <iostream>
#include "animal.h"
Animal::Animal()
{
    _hunger = 50;
    _thirts = 50;
    std::cout << "A animal created " << std::endl;
}
void Animal::Eat() {

    _hunger--;
}
void Animal::Drink() {
    _thirts--;
}
void Animal::Play(){
    _hunger++;
    _thirts++;
}
int Animal::getHunger() {
    return _hunger;
}
int Animal::getThirts() {
    return _thirts;
}