#include <iostream>
std::string greet(std::string greeting);
int main() {
    std::string al = "Greenfox";
    std::cout << greet(al) << std::endl;
    return 0;
}
std::string greet(std::string x){
    std::string greeting = "Greetings dear, " + x + "!";
    return greeting;
}