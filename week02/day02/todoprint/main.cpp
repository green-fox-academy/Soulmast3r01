#include <iostream>
#include<string>

int main() {

    std::string todoText = " - Buy milk\n";

    todoText.insert(0, "My todo\n");

    std::string new1 = " - Download games\n";

    std::string new2 = "\t- Diablo\n";

    todoText.append(new1);

    todoText.append(new2);

    std::cout << todoText << std::endl;
    return 0;
}