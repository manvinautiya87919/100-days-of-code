/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    // Input number of late days
    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time!\n");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%d\n", fine);
    } 
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = ₹%d\n", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = ₹%d\n", fine);
    } 
    else {
        printf("Membership Cancelled!\n");
    }

    return 0;
}
