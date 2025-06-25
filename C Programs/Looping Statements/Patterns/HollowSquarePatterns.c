#include<stdio.h>

void main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            // Hollow Square pattern
            // if(i == 0 || i == n-1 || j == 0 || j == n-1)
            //     printf("* ");

            // Hollow square with diagonals intersection pattern
            // if(i == 0 || i == n-1 || j == 0 || j == n-1 || i == j || j == (n-i-1))
            //     printf("* ");

            // Hour glass pattern
            // if(i == 0 || i == n-1 || i == j || j == (n-i-1))
            //     printf("* ");

            // Butterfly pattern
            // if(j == 0 || j == n-1 || i == j || j == (n-i-1))
            //     printf("* ");

            if(j == 0 || j == n-1 || i == j || j == (n-i-1)) 
                printf("* ");
            
            else {
                printf("  ");
            }
        }

        printf("\n");
    }
}