//program to calculate simple interest
/*
Author: Reagan Galo
Reg no: CT101/G/23572/24
Date: 23/9/2024
*/
#include <stdio.h>
int main() {
    //initiallization and declaration
    int principal, rate, time, interest;

    //user input
    printf("Enter the principal amount here:");
    scanf("%d", &principal);

    printf("Enter the rate of interest here:");
    scanf("%d", &rate);

    printf("Enter the period of time in (years):");
    scanf("%d", &time);

    //formula to calculate simple interest
    interest= (principal * rate * time)/100;

    //output of the calculation
    printf("The simple interest is %d\n", interest);

    return 0;
}