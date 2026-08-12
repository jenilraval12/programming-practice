/*
Day 2 - Check Whether a Number is Even or Odd
Problem Statement
Write a C program that accepts an integer from the user and determines
whether the number is even or odd. The program should also determine
whether the number is positive, negative, or zero.

Requirements
- Accept an integer value from the user using scanf().
- Determine whether the number is even or odd using the modulus (%) operator.
- If the number is zero, display an appropriate message indicating that
  zero is an even number.
- Determine whether the number is positive, negative, or zero.
- Use if, else if, and else statements.
- Use comparison and arithmetic operators to perform the required checks.

Example 1
Input:
8

Output:
8 is an Even Number
8 is a Positive Number

Example 2
Input:
-15

Output:
-15 is an Odd Number
-15 is a Negative Number

Example 3
Input:
0

Output:
Zero is an Even Number
Number is Zero

The program should correctly handle positive integers, negative integers,
and zero.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Zero is an Even Number");
    }
    else if (num % 2 == 0)
    {
        printf("%d is an Even Number", num);
    }
    else
    {
        printf("%d is an Odd Number", num);
    }
    if (num == 0)
    {
        printf("\nNumber is Zero");
    }
    else if (num > 0)
    {
        printf("\n%d is a Positive Number", num);
    }
    else
    {
        printf("\n%d is a Negative Number", num);
    }
    return 0;
}
