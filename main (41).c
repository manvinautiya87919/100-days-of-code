/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, power, middlePart, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;   

    digits = (int)log10(num);   
    power = (int)pow(10, digits);

    firstDigit = num / power;   

    middlePart = num % power;   
    middlePart = middlePart / 10; 

    swappedNum = lastDigit * power + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}

