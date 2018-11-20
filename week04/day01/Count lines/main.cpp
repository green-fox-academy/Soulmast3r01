#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
int count(std::string fileName);

int main() {

    count("../sorok.txt");

    return 0;
}

int count(std::string fileName) {
   int numLines = 0;

    std::ifstream myFile(fileName);
    if (myFile.is_open()) {
        std::cout << "The file is opened" << std::endl;
    } else {
        std::cout << "The file could not open" << std::endl;
    }

    std::string line;
    while ( std::getline(myFile, line) ) {
        std::cout << line << std::endl;
        ++numLines;
    }
    std::cout << "The number of lines that this file has is: " << numLines <<" lines. " << std::endl;
    return numLines;
}




