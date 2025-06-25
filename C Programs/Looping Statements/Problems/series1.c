// Series - 0, 0, 7, 6, 14, 12, 21, 18

#include<stdio.h>

void main() {
    int n, i, j, seven=0, six=0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        if(i%2 != 0) {
            printf("%d ", seven);
            seven += 7;
        }

        else {
            printf("%d ", six);
            six += 6;
        }
    }

    if(n%2 != 0) {
        printf("\n%dth term is: %d", n, seven-7);
    }
    
    else {
        printf("\n%dth term is: %d", n, six-6);
    }
}