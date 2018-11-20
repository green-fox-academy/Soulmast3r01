#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream file;
    file.open("../my-file.txt");
    if (file.is_open()) {
        std::cout << "The file is opened!" << std::endl;
        std::string word;
        std::cout << "Enter some text, with a blank last line:\n";
        while (getline(std::cin, word) && word != "")
        {
            file << word << std::endl;
        }
    } else {
        std::cout << "The file could not open! Fuck u!" << std::endl;
    }

    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    return 0;
}