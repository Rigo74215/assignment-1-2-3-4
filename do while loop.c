// program to print do while loop
#include <stdio.h>

int main () {
    int i=1, sum=0, sumofsquares=0;
    
    do {
        sum +=i;
        sumofsquares +=i*i;
        
        printf(" %d\t%d\n", i, i*i);
        
        i++;
    }
    while (i<=30);
    
    printf("\nsum of numbers: %d\n", sum);
    printf("sumofsquares: %d\n", sumofsquares);
    
    return 0;
    
}