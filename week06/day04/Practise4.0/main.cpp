#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string> &planets);

int main(int argc, char *args[]) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune"};
    std::vector<std::string> planetsNew = putSaturn(planets);
    for (int i = 0; i < planetsNew.size(); i++) {
        std::cout << planetsNew[i] << " ";
    }
    return 0;
}
std::vector<std::string> putSaturn(const std::vector<std::string> &planets) {
    std::vector<std::string> planetsNew = {};
    for (int i = 0; i < planets.size(); i++) {
        planetsNew.push_back(planets[i]);

    }
    planetsNew.insert(planetsNew.begin() + 5, "Saturn");
    return planetsNew;
}



