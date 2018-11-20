#include <iostream>
#include <string>
int main() {

    std::string sentence = "Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.";
    std::string from = "It";

    int start_pos = sentence.find(from);
    if(start_pos == std::string::npos)
        std::cout << "Cannot replace" << std::endl;
    else
        sentence.replace(start_pos, from.length(), " It always takes longer than");


    std::cout << sentence << std::endl;
    return 0;
}