#include <iostream>
#include "counter.h"

Counter::Counter() {
    _stat = 0;
    _initial = 0;
}

Counter::Counter(int stat) {
    _stat = stat;
    _initial = stat;
}

int Counter::getInitial() {
    return _initial;
}

int Counter::get() {
    return _stat;
}

void Counter::add(int number) {
    _stat += number;
}

void Counter::add() {
    _stat++;
}

void Counter::reset() {
    _stat = _initial;
}