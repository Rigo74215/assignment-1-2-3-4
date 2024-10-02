//program to dtermine loan elligibility
/*
Author: Reagan Galo
Reg no: CT101/G/23572/24
Date: 30/09/24
*/

# include <stdio.h>
int main ( ) {
	//initiallization and declaration
       int age ;
       float annualincome ;
       printf("enter age:");
       scanf("%d",&age);
       printf("annual income:");
       scanf("%f",&annualincome);
       
    //checking conditions
       if ( age >=21&& annualincome>=21000){
       printf("congratulation you qualify for a loan\n");
       }
       else {
       printf("unfortunately we are unable to offer you a loan at this time");
       }
       return 0;
       
}