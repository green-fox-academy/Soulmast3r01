#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string from = "bots";
    int start = url.find(from);
    url.replace(start, from.length(), "odds");
    std::string put = ":";
    url.insert(5,put);
    std::cout << url << std::endl;

    return 0;
}