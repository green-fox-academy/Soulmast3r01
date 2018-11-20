#include <iostream>
#include<string>
#include <vector>
#include <map>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets);

int main() {


    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};



    for(const auto& planet : putSaturn(planets)) {
        std::cout << planet << " ";
    }
    return 0;
}

std::vector<std::string> putSaturn(const std::vector<std::string>& planets){
    std::string sat = "Saturn";
    std::vector<std::string> planetsNew = planets;
    planetsNew.insert( planetsNew.end(), sat );





    return planetsNew;
}




