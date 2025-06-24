// Swapping using arthimetic operators

#include<stdio.h>

void main() {
    int a, b;

    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping a: %d and b:%d\n", a, b);
    
    int c = a, d = b;

    // Swapping using + and -
    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping a and b using sum and diff: \na: %d and b: %d\n", a, b);

    a = c;
    b = d;

    //Swapping using * and / 
    a = a*b;
    b = a/b;
    a = a/b;

    printf("After swapping a and b using prod and div: \na: %d and b: %d", a, b);
}