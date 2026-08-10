/*Problem Statement

Write a C program that accepts three integers from the user and determines:

The largest number
The smallest number

If all three numbers are equal, indicate that they are equal.

Example 1
Input
10
25
17

Output
Largest Number: 25
Smallest Number: 10

Example 2

Input
15
15
15

Output
All three numbers are equal.*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, max, min;
    printf("================================================");
    printf("\nLargest and Smallest Number Out Of Three Numbers");
    printf("\n================================================");
    printf("\nEnter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Third Number: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    else
        max = num3;

    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else
        min = num3;

    if (max == min)
    {
        printf("All Three Numbers Are Equal");
    }
    else
    {
        printf("Max: %d", max);
        printf("\nMin: %d", min);
    }
    return 0;
}
