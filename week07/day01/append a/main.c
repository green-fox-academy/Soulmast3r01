#include <stdio.h>
#include <mem.h>

void append(char* s, char c);
int main() {
    char d[100];
    char f = 'a';
    printf("Give me string and I will put an a at the end of it!\n");
    scanf("%s", d);

    append(d,f);
    printf("%s",d);
    return 0;
}
void append(char* s, char c)
{
    int len = strlen(s);
    s[len] = c;
    s[len+1] = '\0';
}
