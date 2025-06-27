#include <stdio.h>

void main() {
    int arr[100];
    int n, num, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);

    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }    
    
    arr[pos] = num;

    printf("After insertion: ");
    for(int i=0; i<n+1; i++) {
        printf("%d ", arr[i]);
    }
}