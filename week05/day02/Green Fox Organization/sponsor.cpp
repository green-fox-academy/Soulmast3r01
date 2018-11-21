
#include "sponsor.h"

void Sponsor::introduce() const {
    std::cout << " Hi, I'm " << _name << " a " << _age << " year old " << gendertostring() << " who represents "
    << _company << " and hired " << _hiredStudents << " students so far " <<std::endl;
}

void Sponsor::getGoal() const {
    std::cout << " My goal is: Hire brilliant junior software developers. " <<std::endl;
}
Sponsor::Sponsor(): Person("Jande Doe", 30, Gender::FEMALE){
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::Sponsor(std::string name, int age, Gender gender,std::string company ) {
    _company = company;
    _hiredStudents = 0;
}
    const std::string &Sponsor::get_company() const {
        return _company;
    }

    int Sponsor::get_hiredStudents() const {
        return _hiredStudents;
    }

void Sponsor::hire() {
    _hiredStudents += 1;
}

