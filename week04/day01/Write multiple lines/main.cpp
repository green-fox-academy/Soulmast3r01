
#include <iostream>
#include <fstream>
#include <string>

void create(std::string path, std::string word, int num);
// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main() {
    int num;
    std::string path = "../level999.txt";
    std::cin >> num;
    std::string word;
    std::cin >> word;

    create(path, word, num);

        return 0;
    }


void create(std::string path, std::string word, int num) {
    std::ofstream myFile;
    myFile.open(path);
    if (myFile.is_open()) {
        std::cout << "The file is opened!" << std::endl;
        for (int i = 0; i < num; i++)
            myFile << word << std::endl;

    }
}
