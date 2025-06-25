#include<stdio.h>

void main() {
    int num, x, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    x = num;

    while(x != 0) {
        sum += x%10;
        x /= 10;
    }

    if(num % sum == 0) {
        printf("%d is a Niven's number", num);
    }

    else {
        printf("%d is not a Niven's Number", num);
    }
}