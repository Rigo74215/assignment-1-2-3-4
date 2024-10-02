//program to calculate library fine
/*
Author: Reagan Galo
Reg no: CT101/G/23572/24
Date: 1/10/2024
*/

# include <stdio.h>

int main() {
    int book_id, due_date, return_date;
    int daysOverdue, fineRate, fineAmount;
    
    //output
    printf("Enter the due_date(in format YYYYMMDD):");
    scanf("%d", &due_date);

    printf("Enter the return_date (in form2at YYYYMMDD):");
    scanf("%d", &return_date);

    //calculation of overdue days
    daysOverdue= return_date - due_date;
    
    printf("This is the daysOverdue: %d\n", daysOverdue);

    //determine the fine rate based on daysOverdue
    if (daysOverdue<=7){
    fineRate= 20;
    fineAmount= (daysOverdue * fineRate);	
 	printf("The fine amount is %d", fineAmount);
 	}
 
    else if (daysOverdue >=8 && daysOverdue <=14); 
    fineRate= 50;
    fineAmount = (daysOverdue * fineRate);
    printf("The fine amount is %d", fineAmount);
	
    if(daysOverdue >=15)
    fineRate= 100;
    fineAmount = (daysOverdue * fineRate);
    printf("The fine amount is %d", fineAmount);
    
    printf("\n the book_id is %d", book_id);
    printf("\n the due_date is %d", due_date);
    printf("\n the return_date is %d", return_date);
    printf("\n the fineAmount is %d", fineAmount);	  
	
    return 0;

}