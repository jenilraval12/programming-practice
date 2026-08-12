/*
Day 1 - Arithmetic Operations

Problem Statement
Write a C program that accepts two integers from the user and performs
basic arithmetic operations on them.

The program should calculate and display:
1. Sum
2. Difference
3. Product
4. Quotient
5. Remainder

Requirements
- Accept two integer values from the user using scanf().
- Perform all five arithmetic operations using arithmetic operators.
- Display the results in a clearly formatted manner.
- Check whether the second number is zero before performing division
  and remainder operations.
- If the second number is zero, display an appropriate error message
  instead of performing division or remainder operations.
- Use if-else statements for handling the division-by-zero condition.

Example 1
Input:
15
4

Output:
=========================
Arithmetic Operations
=========================

Sum of 15 and 4 is: 19
Difference of 15 and 4 is: 11
Product of 15 and 4 is: 60
Quotient of 15 and 4 is: 3
Remainder of 15 and 4 is: 3

Example 2
Input:
20
0

Output:
Error: Division by zero is not possible

The program should correctly handle positive numbers, negative numbers,
zero, and different combinations of integer values.
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter First Integer Number: ");
    scanf("%d", &num1);
    printf("Enter Second Integer Number: ");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("Error: Division by zero is not possible");
    }
    else
    {   
        printf("\n=========================");
        printf("\nArithmetic Operations");
        printf("\n=========================");
        printf("\n\nSum of %d and %d is: %d", num1, num2, (num1 + num2));
        printf("\nDifference of %d and %d is: %d", num1, num2, (num1 - num2));
        printf("\nProduct of %d and %d is: %d", num1, num2, (num1 * num2));
        printf("\nQuotient of %d and %d is: %d", num1, num2, (num1 / num2));
        printf("\nRemainder of %d and %d is: %d", num1, num2, (num1 % num2));
    }
}
