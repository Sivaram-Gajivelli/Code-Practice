// no arg pass and no return values

#include<stdio.h>

void number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num%2 == 0) ? printf("Even number") : printf("Odd number");
}

void main() {
    number();
}