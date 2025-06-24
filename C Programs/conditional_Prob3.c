#include<stdio.h>

void main() {
    int weight, time;

    printf("Input value \n");
    scanf("%d", &weight);

    if(weight < 0)
        printf("INVALID INPUT");

    else if(weight == 0)
        printf("Time estimated: 0 minutes");

    else if(weight <= 2000) 
        printf("Time estimated: 25 minutes");
    
    else if(weight > 2000 && weight <= 4000) 
        printf("Time estimated: 35 minutes");

    else if(weight > 4000 & weight <= 7000)
        printf("Time estimated: 45 minutes");

    else
        printf("OVERLOAD");    
}   