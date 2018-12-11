#include <stdio.h>

int get_sum_of_digits(int n);

int fckn_hard_function(int n, int n1);

int main() {
    int first_number = 0;
    int second_number = 0;
    printf("Give me two numbers and I will check it if the sum of the digits are equal or not!\n");
    scanf("%d", &first_number);
    scanf("%d", &second_number);

    return fckn_hard_function(first_number, second_number);
}

int get_sum_of_digits(int n)
{
    int sum = 0;
    int temp = n;
    while(temp > 0)
    {
        int digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    return sum;
}


int fckn_hard_function(int n, int n1)
{
    int sum1 = get_sum_of_digits(n);
    int sum2 = get_sum_of_digits(n1);

    printf("%d\n",sum1);
    printf("%d\n",sum2);

    if (sum1 == sum2){
        return 1;
    }else{
        return 0;
    }
}