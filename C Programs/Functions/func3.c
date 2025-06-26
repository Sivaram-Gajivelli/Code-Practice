//arg pass and no return value

#include<stdio.h>

void number(int a, int b) {
    printf("Sum of %d and %d is: %d", a, b, a+b);
}

void main() {
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    number(a, b);
}