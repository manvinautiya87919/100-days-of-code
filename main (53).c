/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/




/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i;

    
    printf("*\n\n");

    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    printf("*\n");

    return 0;
}
