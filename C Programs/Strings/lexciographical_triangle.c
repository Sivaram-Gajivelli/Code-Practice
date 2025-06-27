#include <stdio.h>
#include <string.h>

void main() {
    int n;
    char ch = 'A';

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            printf("  ");
        }

        for(int k=0; k<=i; k++) {
            printf(" %c  ", ch); 
            ch++;

            if(ch > 'Z' && ch < 'a') {
                ch = 'a';
            }

            else if(ch > 'z') {
                ch = 'A';
            }
        }
        
        printf("\n");
    }
}