// Write a prog to calculate area of a rectangle by creating a const definition(obj like macros) as 
// number or text. 

#include<stdio.h>
#define LENGTH 5
#define BREADTH 3
#define SHAPE "Rectangle" // Macro Str
#define AREA(l, b) (l*b) // Macro Function

void main() {
    printf("Area of %s = %d", SHAPE, AREA(LENGTH, BREADTH));
}