cmake_minimum_required(VERSION 3.12)
project(Instruments_to_Stringed_Instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments_to_Stringed_Instruments main.cpp violin.cpp violin.h instrument.cpp instrument.h stringedinstrument.cpp stringedinstrument.h bassguitar.cpp bassguitar.h electricguitar.cpp electricguitar.h)