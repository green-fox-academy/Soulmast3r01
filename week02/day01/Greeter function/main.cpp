#include <iostream>

 std::string greet (std::string x);

int main() {

std::string al = "Greenfox";

greet(al);





    return 0;
}

std::string greet (std::string x)
{
   std::cout << "Dear Greeting,  " << x << std::endl;
}