#include <stdio.h>

int calc(int num) {
    return num*num;
}

int input() {
    int x;
    printf("Enter the value: ");
    scanf("%d", &x);

    int res = calc(x);

    return res;
}

void main() {
    int res = input();
    printf("Result: %d", res);
}