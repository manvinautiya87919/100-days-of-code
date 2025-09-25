/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate:\n");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Rotated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

