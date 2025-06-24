#include<stdio.h>
#define EVEN_ODD(a) ((a%2 == 0) ? printf("%d is even", a) : printf("%d is odd", a))

void main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    EVEN_ODD(a);
}