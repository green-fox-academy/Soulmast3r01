#include <stdio.h>
int checking(int a);
int main() {
    printf("Give me a number and I will check it if its even or odd!\n");
    int number  = 0;
    scanf("%d", &number);
    return checking(number);
}
int checking(int a)
{
 if(a % 2 == 0){
     return 1;
 }else{
     return 0;
 }
}