/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main()
{
    float length,width,area,perimeter;
    printf("Enter the length of the rectangle:");
    scanf("%f",&length);
    printf("Enter the width of the rectangle:");
    scanf("%f",&width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("the area of the rectangle is:%.f\n",area);
    printf("the perimeter of thr rectangle is:%.f\n",perimeter);
    

    return 0;
}
