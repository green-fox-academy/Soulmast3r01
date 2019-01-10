#include <stdio.h>
#include <conio.h>
#include <mem.h>
#include <malloc.h>


char* read_file_to_buffer(const char *file_name);
char* vowel_counter(char *text);
int write_vowels_into_file(const char *file_name);

int main() {

    vowel_counter();
    return 0;
}
char* read_file_to_buffer(const char *file_name)
{
    FILE *file_pointer = fopen(file_name, "r");
    if (file_pointer == NULL)
        return -1;
    int size;
    char buffer[100];
    char* text;
    while (fgets(buffer, 100, file_pointer) != NULL) {
        printf("%s\n", buffer);
        char *text = (char *) realloc((strlen(buffer) + 1) * sizeof(char));
        strcat(text, buffer);

    }
    return text ;
}
char* vowel_counter(char *text)
{
    read_file_to_buffer("../text.txt");
    int len = 0;
    int vow = 0;
    len = strlen(text);
    for (int i = 0; i < len; ++i) {
        if(text[i]=='a' || text[i]=='A' || text[i]=='e' || text[i]=='E' || text[i]=='i' || text[i]=='I' || text[i]=='o' || text[i]=='O' || text[i]=='u' || text[i]=='U')
            vow=vow+1;
    }
    printf("\nTHERE ARE %d VOWELS IN THE STRING",vow);
    return text;
}

