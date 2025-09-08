/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  

    if (num < 0) {
        num = -num;  
    }

    while (num != 0) {
        remainder = num % 10;   
        sum += remainder;       
        num /= 10;              
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}

