// shifting elements in an array in clockwise direction

// 1 2 3 4 5 key = 2 -> 2 3 4 5 1 -> 3 4 5 1 2

#include <stdio.h>

void main() {
    int arr[100];
    int n, key;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    int head, i;

    for(int k=0; k<key; k++) {
        head = arr[0];
        for(i=0; i<n-1; i++) {
            arr[i] = arr[i+1];
        }
        arr[i] = head;
    }

    printf("After shifting: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

}