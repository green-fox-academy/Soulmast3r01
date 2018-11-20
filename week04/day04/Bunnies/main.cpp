#include <iostream>

float Divide(float numberOfBunnies);
int main() {
    float numberOfBunnies;
    std::cout << "Give the numbers of bunnies" << std::endl;
    std::cin >> numberOfBunnies;
    std::cout << Divide(numberOfBunnies) << std::endl;

}
float Divide(float numberOfBunnies){
    if(numberOfBunnies == 0){
        return 0;
    }else{
        return numberOfBunnies / 0.5;
    }
}