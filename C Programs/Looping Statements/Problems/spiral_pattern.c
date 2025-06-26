// Spiral pattern printing
//      Top
//  r    1  2  3 4   l
//  i   12 13 14 5   e
//  g   11 16 15 6   f
//  h   10  9  8 7   t   
//  t    Bottom

#include <stdio.h>

void main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    
    int spiral[n][n];
    int top = 0, left = 0, bottom = n-1, right = n-1, num = 1;

    while (top <= bottom && left <= right) {
        for(int i=left; i<=right; i++) {
            spiral[top][i] = num++;
        }
        top++;

        for(int i=top; i<=bottom; i++) {
            spiral[i][right] = num++;
        }
        right--;

        for(int i=right; i>=left; i--) {
            spiral[bottom][i] = num++;
        }
        bottom--;

        for(int i=bottom; i>=top; i--){
            spiral[i][left] = num++;
        }
        left++;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%4d ", spiral[i][j]);
        }
        printf("\n");
    }
}