/*
Day 4 - Find Largest and Smallest of Three Numbers
Problem Statement
Write a C program that accepts three integers from the user and
determines the largest and smallest numbers among them.

Requirements
- Accept three integer values from the user using scanf().
- Determine the largest value using conditional statements.
- Determine the smallest value using conditional statements.
- If all three numbers are equal, display an appropriate message.
- Display the largest and smallest values when the numbers are not all equal.
- Use if, else if, and else statements.
- Use logical AND (&&) and comparison operators to compare the numbers.

Example 1
Input:
10
25
17

Output:
Max: 25
Min: 10

Example 2
Input:
15
15
15

Output:
All Three Numbers Are Equal

Example 3
Input:
30
30
15

Output:
Max: 30
Min: 15
The program should correctly handle positive, negative, zero,
and duplicate integer values.
*/

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
