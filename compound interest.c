//program to calculate compound interest
/*
Author: Reagan Galo
Reg no: CT101/G/23572/24
Date: 23/09/24
*/
# include <stdio.h>

int main(){
    //initialization and declaration
    int n, t, p, A;
    float r, ci;

    //user input
    printf("Enter the pricipal amount here:");
    scanf("%p", &p);
    
    printf("Enter the rate of interest:");
    scanf("%d", &r);

    printf("Enter the period of time in (years):");
    scanf("%d", &t);

    printf("Enter the rate of interest compounded annually:");
    scanf("%d", &n);

    

    //output
    A = p * ((1+r/n), n*t);
    ci = A-p;

    printf("The compound interest is %f\n", ci);


    return 0;

}