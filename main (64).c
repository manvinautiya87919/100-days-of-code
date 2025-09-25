/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int digitCount[10] = {0}; 
    int digit, maxDigit = 0, i;

    printf("Enter a number:\n");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    for (i = 1; i < 10; i++) { 
        if (digitCount[i] > digitCount[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
