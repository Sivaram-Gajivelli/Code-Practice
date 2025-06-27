#include <stdio.h>

void main() {
    int arr[100];
    int n, pos;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the pos: ");
    scanf("%d", &pos);

    for(int i=pos; i<n-1; i++) {
        arr[i] = arr[i+1];  
    }

    printf("After deletion: ");
    for(int i=0; i<n-1; i++) {
        printf("%d ", arr[i]);
    }
}