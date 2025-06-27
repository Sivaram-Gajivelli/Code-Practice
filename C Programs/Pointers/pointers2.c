#include <stdio.h>

void main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    for(int i=0; i<3; i++) {
        printf("Element %d: %d \n", i+1, p[i]);
    }
    
    printf("%d \n", *p);
    printf("%d \n", *p+1);
    printf("%d \n", p[1]);
    printf("%d \n", p[2]);
}