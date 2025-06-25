#include<stdio.h>

void main() {
    int n, k, sold;

    n = 10, k = 5;

    scanf("%d", &sold);

    if(sold > 0 && (n - sold) >= k) {
        printf("NUMBER OF CANDIES SOLD: %d\n", sold);
        printf("NUMBER OF CANDIES REMAINING: %d", n-sold);
    }

    else {
        printf("INVALID INPUT\n");
        printf("NUMBER OF CANDIES REMAINING: %d", n-sold);
    }
}