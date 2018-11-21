#ifndef GREEN_FOX_ORGANIZATION_MENTOR_H
#define GREEN_FOX_ORGANIZATION_MENTOR_H
#include <iostream>
#include "student.h"
#include "person.h"
enum class Level{ JUNIOR, INTERMEDIATE, SENIOR };
class Mentor : public Person
 {
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender,Level level );
    void introduce() const override;
    void getGoal() const override;
    std::string leveltostring()const;
protected:
    Level _level;
};


#endif //GREEN_FOX_ORGANIZATION_MENTOR_H
