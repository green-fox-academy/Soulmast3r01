//
// Created by Omgeee4 on 2018.11.14..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter(int stat);

    Counter();


    void add(int number);

    void add();

    int get();


    void reset();

    int getInitial();

private:
    int _stat;
    int _initial = 0;
};


#endif //COUNTER_COUNTER_H
