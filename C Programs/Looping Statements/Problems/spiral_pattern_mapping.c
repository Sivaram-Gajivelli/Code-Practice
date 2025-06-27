#include <stdio.h>

void main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("Enter the matrix: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            matrix[i][j] = x;
        }
    }

    int map[n*n];

    int top = 0, left = 0, bottom = n-1, right = n-1;

    int k = 0;
    while (top <= bottom && left <= right) {
        for(int i=left; i<=right; i++) {
            map[k] = matrix[top][i];
            k++;
        }
        top++;

        for(int i=top; i<=bottom; i++) {
            map[k] = matrix[i][right];
            k++;
        }
        right--;

        for(int i=right; i>=left; i--) {
            map[k] = matrix[bottom][i];
            k++;
        }
        bottom--;

        for(int i=bottom; i>=top; i--) {
            map[k] = matrix[i][left];
            k++;
        }   
        left++;        
    }
    
    printf("The spiral mapping of the matrix is: \n");

    for(int i=0; i<k; i++) {
        printf("%d ", map[i]);
    }
}