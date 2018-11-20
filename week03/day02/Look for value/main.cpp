#include <iostream>
int search (int *array, int length, int *num);
int main() {
    int x;

    std::cout << "Give me a number" << std::endl;
    std::cin >> x;
    int array[5] = {1,2,3,4,5};

    std::cout << search(array,sizeof(array) / sizeof(array[0]), &x);

    return 0;
}

int search (int *array, int length, int *num){


    for(int i = 0; i < length; i++){
    if (array[i] == *num) {return i;}
}
return 0;
    }