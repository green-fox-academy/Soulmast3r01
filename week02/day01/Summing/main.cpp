#include <iostream>

int sum (int x);


int main() {

    int x = 5;

    sum (x);

std::cout << x << std::endl;

    return 0;



}

int sum (int x) {
    int result = 0;


    for (int a = 1; a < x; a++ )
    {
        result = result + a;
    }

return result;


}

