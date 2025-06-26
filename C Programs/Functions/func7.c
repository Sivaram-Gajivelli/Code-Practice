// exponent using nested functions

#include<stdio.h>

int calc(int a, int b) {
    int power = 1;
    for (int i = 0; i < b; i++) {
        power *= a;
    }

    return power;
}

int power() {
    int a, b;

    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);

    int res = calc(a, b);

    return res;
}

void main() {
    int res = power();
    printf("Result: %d", res);
}