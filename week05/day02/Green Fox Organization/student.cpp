#include "student.h"

Student::Student() : Person("Jande Doe", 30, Gender::FEMALE) {
    _skippedDays = 0;
    _previousOrganization = "The School of Life";
}

Student::Student(std::string name, int age, Gender gender,std::string previousOrganization): Person(name, age, gender){
    _previousOrganization = previousOrganization;
    _skippedDays =0;
}
const std::string &Student::get_previousOrganization() const {
    return _previousOrganization;
}

int Student::getskippedDays() const {
    return _skippedDays;
}
void Student::skipDays(int numberOfDays){
    _skippedDays = _skippedDays + numberOfDays;
}

void Student::introduce() const {
    std::cout << " Hi, I'm " << _name << " a " << _age << " years old " << gendertostring() << " from " << _previousOrganization
              << " who skipped " << _skippedDays << " days from the course already. " <<std::endl;
}

void Student::getGoal() const {
    std::cout << " My goal is: Be a junior software developer. "<<std::endl;
}
