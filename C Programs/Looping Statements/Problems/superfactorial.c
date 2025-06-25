#include<stdio.h>

void main() {
    int i, j, num, superFact = 1;

    printf("Enter a num: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++) {
        int fact = 1;

        for(j = 1; j <= i; j++) {
            fact *= j;
        }
        
        superFact *= fact;
    }

    printf("Super Factorial: %d", superFact);
}