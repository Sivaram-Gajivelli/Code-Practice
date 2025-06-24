#include<stdio.h>

void main() {
    int i, j, k, n;
    printf("Enter size: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        for(j=0; j<n-i-1; j++) {
            printf("  ");
        }

        int value = 1;
        for(k=0; k<=i; k++) {
            printf("  %d  ", value);
            value = value * (i-k)/(k+1);
        }

        printf("\n");
    }
}