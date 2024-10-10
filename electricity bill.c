//program to print electricity bill
#include <stdio.h>

int main() {
    float chargeperunit, totalbill, surchage=0.0;
    char customer_name[20];
    int customer_id, unit_consumed;
    
    // Prompt the user to enter customer_id
    printf("Enter your id: ");
    scanf("%d", &customer_id);
    
    // Prompt the user to enter customer_name
    printf("Enter your name: ");
    scanf("%s", &customer_name);

	// Prompt the user for the number of electricity unit_consumed
	printf("Enter units consumed: ");
    scanf("%d", &unit_consumed);
    
    // Calculate the bill based on usage
    if (unit_consumed <=199) {chargeperunit =1.20;}
  	else if (unit_consumed >=200 &&unit_consumed <400) {chargeperunit =1.50;}
	else if (unit_consumed >=400 &&unit_consumed <600) {chargeperunit =1.80;}
	else {chargeperunit =2.00;}	 
		
	//formula of calculating totalbill
	 totalbill = unit_consumed * chargeperunit;  
	 
	 if (totalbill >400) {surchage = totalbill * 0.15;}
	 if (totalbill <100) {totalbill = 100;}	
     else {totalbill +=surchage;} 

    // Display the calculated bill    
	printf("\n electric bill\n");
    printf("The customer_id is: %d\n", customer_id);
	printf("The customer_name is: %s\n", customer_id);
	printf("The unit_consumed is: %d\n", unit_consumed);
	printf("The chargeperunit is: %.3f ksh\n", chargeperunit);
	printf("Total amount pay: %.3f ksh\n", totalbill);
	
    return 0;
}