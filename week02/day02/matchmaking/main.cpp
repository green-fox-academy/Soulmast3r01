#include <iostream>
#include<string>
#include<vector>
std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys);

int main() {


    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};



    for(const auto& result : makingMatches(girls, boys))
    {

        std::cout << result << " ";
    }

    return 0;
}

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys){

    std::vector<std::string>boysNew = boys;
    std::vector<std::string>girlsNew = girls;




}