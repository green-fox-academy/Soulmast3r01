#include "person.h"

void Person::introduce ()const{
    std::cout << "Hi, I'm " << _name << " , a" << _age << " year old" << gendertostring() <<std::endl;
}
void Person::getGoal()const{
    std::cout << "My goal is: Live for the momen!" <<std::endl;
}
Person::Person() {
    _name = "Jane Doe";
    _age = 30;
     _gender = Gender::FEMALE;
}
Person::Person(std::string name, int age, Gender gender){
    _name = name;
    _age = age;
     _gender = gender;
}

const std::string &Person::get_name() const {
    return _name;
}

int Person::get_age() const {
    return _age;
}
std::string Person::gendertostring() const {
    if (_gender == Gender::MALE){
            return "MALE";
    }else{
        return "FEMALE";
    }
}

