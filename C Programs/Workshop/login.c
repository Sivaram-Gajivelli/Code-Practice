// Login system with parameter access

#include<stdio.h>
#include<string.h>

void main() {
    char username[10], password[10];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(username, "admin") == 0) {
        if(strcmp(password, "admin123") == 0){
            printf("Welcome Admin!!!");
        }

        else {
            printf("Invalid Password");
        }
    }

    else {
        printf("Unknown Username!!");
    }
}