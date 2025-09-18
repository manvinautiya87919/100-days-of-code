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
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main() {
    int i, j, n = 5;

    
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}
