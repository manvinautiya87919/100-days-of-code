/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
