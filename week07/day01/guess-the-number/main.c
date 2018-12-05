#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_num = 0;
    int guessed_num = 0;


    srand(time(NULL));
    random_num = rand() % 10 + 1;
    printf("Guess my number!\n ");

    while(1)
    {

        scanf("%d", &guessed_num);
        if (guessed_num == random_num)
        {
            printf("You guessed correctly!");
            break;
        }
        if (guessed_num < random_num)
            printf("The stored number is higher Guess again.\n ");

        if (guessed_num > random_num)
            printf("The stored number is lower Guess again. \n");

    }

    return 0;
}