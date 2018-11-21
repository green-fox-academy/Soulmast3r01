#include "mentor.h"
#include <iostream>
#include <string>
void Mentor::introduce() const {
    std::cout << "Hi, I'm" << _name << " a " << _age << " year old " << gendertostring() << leveltostring() << "mentor" << std::endl;
}

void Mentor::getGoal() const {
    std::cout << "My goal is: Educate brilliant junior software developers." <<std::endl;
}
Mentor::Mentor(): Person("Jande Doe", 30, Gender::FEMALE){
    _level = Level::INTERMEDIATE;
}

Mentor::Mentor(std::string name, int age, Gender gender,Level level ){
    _level = level;
}
std::string Mentor::leveltostring() const {
    if (_level == Level::INTERMEDIATE){
        return "INTERMEDIATE";
    }else if(_level == Level::JUNIOR){
        return "JUNIOR";
    }else{
        return "SENIOR";
    }
}
