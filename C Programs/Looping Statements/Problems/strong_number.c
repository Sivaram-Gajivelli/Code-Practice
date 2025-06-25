#include<stdio.h>

void main() {
    int num, x, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    x = num;

    while(x != 0) {
        int digit = x % 10;
        int fact = 1;
        for(int i=1; i<=digit; i++) {
            fact *= i;
        }

        sum += fact;
        x /= 10;
    }
    
    if(sum == num) {
        printf("%d is a Strong number", num);
    }

    else {
        printf("%d is not a Strong number", num);
    }
}