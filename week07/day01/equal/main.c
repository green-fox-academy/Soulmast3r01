#include <stdio.h>
int equal(int a, int b);

int main() {
    int first_number = 0;
    int second_number = 0;
    printf("Give me two numbers and I will check it if its equal or not!\n");
    scanf("%d", &first_number);
    scanf("%d", &second_number);

    return equal(first_number, second_number);
}
int equal(int a, int b)
{
   if(a == b){
       return 1;
   }else{
       return 0;
   }
}