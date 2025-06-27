#include <stdio.h>

void main() {
    int a = 10;
    int *p;
    p = &a;
    printf("Value: %d\n", a);
    printf("Address: %d\n", p);
    printf("Value: %d\n", *p);
    printf("Address value of p: %p\n", *p);
}