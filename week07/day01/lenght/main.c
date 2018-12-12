#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20];

    printf("Hello! What is your name?\n");
    scanf("%s", name);

    printf("Wow your name is %d characters long.", strlen(name));

    return 0;
}