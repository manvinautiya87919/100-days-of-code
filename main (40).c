/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], onesComplement[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            onesComplement[i] = '1';
        else if (binary[i] == '1')
            onesComplement[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 1; // exit if invalid input
        }
    }
    onesComplement[i] = '\0'; // null terminate string

    printf("1's Complement = %s\n", onesComplement);

    return 0;
}
