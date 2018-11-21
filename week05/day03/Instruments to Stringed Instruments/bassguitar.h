#include "Instrument.h"
#include "StringedInstrument.h"
#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H

class BassGuitar: public StringedInstrument {
public:
    BassGuitar();
    explicit BassGuitar(int numberOfStrings);
    std::string sound() override;
    void play() override;
};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
