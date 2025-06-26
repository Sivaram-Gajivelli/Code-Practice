// arg passing and return value

#include<stdio.h>

int sum(int a, int b) {
    return a+b;
}

void main() { 
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Sum of %d and %d is %d", a, b, sum(a, b));
}