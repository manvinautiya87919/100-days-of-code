/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);

    return 0;
}
