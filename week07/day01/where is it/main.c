#include <stdio.h>
#include <string.h>

int checking(char *str, char c);

int main() {
    char d[100];
    char f;

    printf("Enter a string\n");
    scanf("%s", d);

    printf("Enter a string\n");
    scanf("%c", &f);

    return checking(d,f);
}

int checking(char *str, char c) {
    char *ptr;
    long index;

    ptr = strchr(str, c);
    if (ptr == NULL) {
        return -1;
    }
    index = ptr - str;
    return index;
}
