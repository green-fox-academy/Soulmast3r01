#include <iostream>
#include <string>
int main() {



    std::string sentence = "In a dishwasher far far away";
    std::string from = "dishwasher";

    int start_pos = sentence.find(from);
    if(start_pos == std::string::npos)
        std::cout << "Cannot replace" << std::endl;
    else
        sentence.replace(start_pos, from.length(), "galaxy");


    std::cout << sentence << std::endl;
    return 0;
}