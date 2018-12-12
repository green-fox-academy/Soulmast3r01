#include <stdio.h>
#include <string.h>

int checking(char r[], char v[]);

int main() {
    char a[100], b[100];

    printf("Enter a string\n");
    gets(a);

    printf("Enter a string\n");
    gets(b);

   return checking(a,b);
}

int checking(char r[100], char v[100]) {
    if (strcmp(r, v) == 0)

        return 1;
    else

    return 0;
}