// frequency of the numbers in an array

#include <stdio.h>

void main() {
    int arr[100];
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    int freq[100][1];
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
        freq[i][0] = 0;
    }

    for(int i=0; i<n; i++) {
        freq[arr[i] - 1][0] += 1;
    }
 
    printf("Frequency of each element: ");
    for(int i=0; i<n; i++) {
        printf("%d ", freq[i][0]);
    }

}