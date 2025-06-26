// no arg and return value

#include<stdio.h>

int sum() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    return a+b;
}

void main() {
    int res = sum();
    printf("Sum: %d", res);
}