#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"
#ifndef GREEN_FOX_ORGANIZATION_COHORT_H
#define GREEN_FOX_ORGANIZATION_COHORT_H


class Cohort {
public:
    Cohort(std::string name);
    void addStudent (Student*);
    void addMentor(Mentor*);
    void info();

protected:
    std::string _name;
    std::vector <Student*> _students;
    std::vector <Mentor*> _mentors;
};

#endif
