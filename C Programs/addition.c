//Write a prog to summate 2 numbers without addition operator

#include<stdio.h>

void main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    while(b != 0) {
        int carry = a&b;
        a = a^b;
        b = carry << 1;
    }

    printf("a+b = %d", a);
}