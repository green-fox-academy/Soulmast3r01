#include <iostream>

int doubling (int baseNum );

int main()

{
    int baseNum = 123;
     int result = doubling(baseNum);

     std::cout << result << std::endl;

   return 0;


}

int doubling (int baseNum ) {



    return baseNum * 2;

}