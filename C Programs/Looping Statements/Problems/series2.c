// Series - 1, 1, 2, 3, 4, 9, 8, 27, 16, .....

#include<stdio.h>
#include<math.h>

void main() {
    int n, two=1, three=1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        if(i%2 != 0) {
            printf("%d ", two);
            two *= 2;
        }

        else {
            printf("%d ", three);
            three *= 3;
        }
    }

    if(n%2 != 0) {
        printf("\n%dth term is: %d", n, (int)pow(2, n/2));
    }

    else {
        printf("\n%dth term is: %d", n, (int)pow(3, (n/2)-1));
    }
}