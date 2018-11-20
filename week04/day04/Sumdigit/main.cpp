#include <iostream>
int getNumber(int);
int main() {
    int number;
    std::cout << "Give me a non negative number" << std::endl;
    std::cin >> number;
    std::cout << getNumber(number) << std::endl;


}
int getNumber(int n){
    if(n < 10){
        return n;
    }
       else{
           return (n % 10 + getNumber (n / 10));
       }
}