#include <stdio.h>

int decide(int result_age);

int main() {
    int age = 0;
    int given_age;
    int result = decide(age);
    printf("%d\n ", result);
    return 0;
}

int decide(int result_age) {
    int age = 0;
    int given_age;
    printf("Give me your age!\n ");
    scanf("%d", &given_age);
    result_age = age + given_age;

    if (result_age < 18) {
        printf("You are not enough old to buy alcohol in Hungary!\n ");
    }else{
        printf("You can buy now alcohol in Hungary!\n ");
    }
    return 0;
}