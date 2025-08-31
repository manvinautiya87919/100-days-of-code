/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, prod;
    float quotient;

    printf("Enter two numbers (you can separate them by space or enter): ");
    scanf("%d %d", &a, &b);   // works with both space and enter

    sum = a + b;
    diff = a - b;
    prod = a * b;

    if (b!=0)
    {
        quotient = (float)a / b;
        printf("Quotient = %.2f\n", quotient);
    }
    else
    {
        printf("Division by zero is not allowed!\n");
    }

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    return 0;
}
