#include <iostream>
std::string appendAFunc(std::string plusa);
int main() {
    std::string typo = "Chinchill";
    std::cout << appendAFunc(typo) << std::endl;
    return 0;
}
std::string appendAFunc(std::string x){
    std::string plusa = x + "a";
    return plusa;
}