/*Day 1 – Problem 1
Problem Statement

Write a C program to input two integers from the user and display:

1) Sum
2) Difference
3) Product
4) Quotient
5) Remainder

Input
Two integers entered by the user.

Output
Display all five arithmetic operations.

Bonus Challenge ⭐

Handle the case when the second number is 0.
Instead of crashing or causing undefined behavior, print:

"Division by zero is not possible."*/

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
