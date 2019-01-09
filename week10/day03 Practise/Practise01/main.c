#include <stdio.h>
#include <string.h>

void swap(int *a, int *b);
void swapStr(char *a, char *b);

int main()
{
    printf("Hello, World!\n");
    printf("%d %d\n", 5, 42);
    float f = 42.54f;
    printf("%.1f\n", f);
    printf("%.2f\n", f);

    printf("%d\n", (int)f);

    char c = 'f';
    printf("%c\n", c);

    char* text = "helloszia";
    printf("%s\n", text);

    char text2[] = "csocsumi";
    printf("%s\n", text2);

    printf("Size text: %d Size text2: %d\n", sizeof(text)/*no gut*/, sizeof(text2));

    int textSize = strlen(text);
    printf("Real size text2: %d\n", textSize);
    printf("Real size text: %d\n", strlen(text2));

    printf("-------------------------------------\n");

    char d[100];
    for (int i = 0; i < 99; ++i) {
        d[i] = 'y';
    }
    d[99] = '\0';

    char* egyik = "csa";
    char* masik = "csumi";

    char harmadik[100];
    char* ujHarmadik = harmadik;

    strcpy(ujHarmadik, egyik);
    printf("%s\n", ujHarmadik);


    char negyedik[100];
    strcat(negyedik, egyik);
    strcat(negyedik, masik);
    strcat(negyedik, masik);
    strcat(negyedik, masik);

    printf("%s\n", negyedik);


    if(!strcmp(egyik, masik)){
        printf("Egyenloek\n");
    }else{
        printf("Nem egyenloek\n");
    }

    printf("%d\n", strcmp(egyik, masik));

    int penis = 5;
    int penis2 = 10;

    printf("penis: %d penis2: %d\n", penis, penis2);
    swap(&penis, &penis2);
    printf("penis: %d penis2: %d\n", penis, penis2);

    char a[5] = "szia";
    char b[5] = "hali";

    printf("a: %s b: %s\n", a, b);
    swapStr(a, b);
    printf("a: %s b: %s\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapStr(char *a, char *b)
{
    char temp[100];
    strcpy(temp, b);
    strcpy(b, a);
    strcpy(a, temp);
}
