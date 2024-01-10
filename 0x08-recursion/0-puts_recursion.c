#include <stdio.h>

void print_with_newline(const char* string) {
    while (*string != '\0') {
        putchar(*string);
        string++;
    }
    putchar('\n');
}
