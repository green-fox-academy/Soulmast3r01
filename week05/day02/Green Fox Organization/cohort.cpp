#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"
#include "cohort.h"
Cohort::Cohort(std::string name) {

    _name = name;
    _students.clear();
    _mentors.clear();
}
void Cohort::addStudent(Student *student) {
    _students.push_back(student);
}

void Cohort::addMentor(Mentor *mentor) {
    _mentors.push_back(mentor);
}

void Cohort::info() {
    std::cout << "The " << _name << " cohort has " << _students.size() << " students and "
              << _mentors.size() << " mentors." << std::endl;
}
