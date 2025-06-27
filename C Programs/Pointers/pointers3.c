#include <stdio.h>

void main() {
    char str[] = "Sivaram";
    char *ptr = str;

    while(*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
}