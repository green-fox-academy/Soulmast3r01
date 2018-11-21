#ifndef GREEN_FOX_ORGANIZATION_STUDENT_H
#define GREEN_FOX_ORGANIZATION_STUDENT_H
#include "person.h"

class Student : public Person
{
public:
    Student();
    Student(std::string name, int age, Gender gender,std::string previousOrganization, int skippedDays);

    void skipDays(int numberOfDays);
    const std::string &get_previousOrganization() const;
    int getskippedDays() const;
    void introduce() const override;
    void getGoal() const override;

protected:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //GREEN_FOX_ORGANIZATION_STUDENT_H
