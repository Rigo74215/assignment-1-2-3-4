//program to print 2D arrays
/*
author: Reagan Galo
date: 10/12/2024
Reg no: CT101/G/23572/24
*/

#include <stdio.h>

int main() {
    int i, j;
    int marks[2][3] = {
        {40, 56, 60},
        {64, 74, 80}
    };
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("marks[%d][%d] = %d\n", i, j, marks[i][j]);
        }
    }

    return 0; 
}
