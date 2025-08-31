/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year conditions
    if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is Not a Leap Year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}
