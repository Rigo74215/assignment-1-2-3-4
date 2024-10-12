//program to print 3D arrays
/*
Author: Reagan Galo
Date: 10/12/2024
Reg no: Ct101/g/23572/24
*/

#include <stdio.h>

int main() {
    int i, j, k;
    int marks[2][3][2] = {
        {
            {40, 56},
            {60, 64},
            {74, 80}
        },
        {
            {84, 86},
            {88, 40},
            {54, 60}
        }
    };
    
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
    for (k = 0; k < 2; k++) {
   
     printf("marks[%d][%d][%d] = %d\n", i, j, k, marks[i][j][k]);
            }
        }
    }
    
    return 0;
}
