// Cyclic Swapping of 3 variables

#include<stdio.h>

void main() {
    int a, b, c;

    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    // a = 22, b = -4, c = 3;
    printf("Before swapping -> a: %d, b: %d, c: %d\n", a, b, c);

    a = a+b+c;
    b = a-b-c;
    c = a-b-c;
    a = a-b-c;

    printf("After swapping -> a: %d, b: %d, c: %d", a, b, c);
}