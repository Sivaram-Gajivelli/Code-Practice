// Write a prog to find max and min of two numbers without using a condition without
// using a condition or terinary operators
// condition: use arthimetic operators only
// input let a = 22
//           b = -8
        
//       max = 22
//       min = -8

#include<stdio.h>
#include<stdlib.h>

void main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    int max = ((a+b) + abs(a-b))/2;
    int min = ((a+b) - abs(a-b))/2;

    printf("Max: %d\n", max);
    printf("Min: %d", min);
}