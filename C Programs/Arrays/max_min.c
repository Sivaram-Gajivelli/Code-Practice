#include <stdio.h>

void main() {
    int arr[10];

    printf("Enter the elements: ");

    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    // finding max element
    int max = arr[0];

    for(int i=1; i<5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Max: %d \n", max);

    // finding minimum element

    int min = arr[0];

    for(int i=1; i<5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Min: %d \n", min);
}