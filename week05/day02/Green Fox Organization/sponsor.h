#ifndef GREEN_FOX_ORGANIZATION_SPONSOR_H
#define GREEN_FOX_ORGANIZATION_SPONSOR_H
#include "person.h"

class Sponsor : public Person
        {
public:
         Sponsor();
         Sponsor(std::string name, int age, Gender gender, std::string company);
    void introduce() const override;
    void getGoal() const override;
    void hire();
    const std::string &get_company() const;
    int get_hiredStudents() const;

protected:
     std::string _company;
     int _hiredStudents;
};

#endif
