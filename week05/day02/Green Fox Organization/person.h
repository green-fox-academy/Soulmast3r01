#include <iostream>
#include <string>
#ifndef GREEN_FOX_ORGANIZATION_PERSON_H
#define GREEN_FOX_ORGANIZATION_PERSON_H
enum class Gender{ MALE, FEMALE };

class Person {
public:
    Person();
    Person(std::string name, int age, Gender gender);
   virtual void introduce() const;
   virtual void getGoal() const;
    const std::string &get_name() const;
    int get_age() const;
    std::string gendertostring()const;
protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif
