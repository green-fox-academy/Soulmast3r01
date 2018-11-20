#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal {
public:
    Animal();

    int getHunger();

    int getThirts();

    void Eat();
    void Drink();
    void Play();

private:
    int _hunger;
    int _thirts;
};


#endif //ANIMAL_ANIMAL_H
