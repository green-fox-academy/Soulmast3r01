#include <stdio.h>

#define BUF_SIZE 5

int read_file_to_buffer(const char *file_name);

int main() {
    printf("Hello, World!\n");
    return 0;
}
int read_file_to_buffer(const char *file_name)
{
    FILE *file_pointer = fopen(file_name, "r");
    if (file_pointer == NULL)
        return 1;

    char text[BUF_SIZE];
    while (fgets(text, BUF_SIZE, file_pointer) != NULL) {
        printf("%s\n", text);
    }

    fclose(file_pointer);
    return 0;
}