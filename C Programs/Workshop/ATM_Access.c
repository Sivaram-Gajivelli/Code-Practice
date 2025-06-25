#include<stdio.h>

void main() {
    int pin, input_pin, balance = 5000, withdraw;
    pin = 1234;

    printf("Enter the pin: ");
    scanf("%d", &input_pin);

    if(input_pin == pin) {
        printf("Pin Verified\n");
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &withdraw);

        if(withdraw <= balance) {
            balance -= withdraw;
            printf("Withdrawl successful. Remaining balance: %d\n", balance); 
        }

        else {
            printf("Insufficient balance.");
        }
    }

    else {
        printf("Invalid Pin");
    }
}