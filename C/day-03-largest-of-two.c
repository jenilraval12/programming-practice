/*
Day 3 - Find Largest and Smallest of Two Numbers

Problem Statement

Write a C program that accepts two integers from the user and determines
the larger and smaller numbers.

Requirements
- Accept two integer values from the user using scanf().
- Compare the two numbers using conditional statements.
- If the numbers are equal, display an appropriate message.
- If the numbers are different, display both the larger and smaller values.
- Use if, else if, and else statements.
- Use comparison operators to determine the relationship between the numbers.

Example 1
Input:
25
17

Output:
Larger Number: 25
Smaller Number: 17

Example 2
Input:
12
30

Output:
Larger Number: 30
Smaller Number: 12

Example 3
Input:
15
15

Output:
Both Numbers Are Equal!!

The program should correctly handle positive numbers, negative numbers,
zero, and equal values.
*/

#include<stdio.h>

int main()
{
    int num1,num2;
    printf("==========================================");
    printf("\nLargest Number Among Two Integer Numbers");
    printf("\n==========================================");
    printf("\nEnter Number1: ");
    scanf("%d",&num1);
    printf("Enter Number2: ");
    scanf("%d",&num2);

    if(num1==num2)
    {
        printf("Both Numbers Are Equal!!");
    }
    else if(num1>num2){
        printf("Larger Number: %d",num1);
        printf("\nSmaller Number: %d",num2);
    }
    else
    {
        printf("Larger Number: %d",num2);
        printf("\nSmaller Number: %d",num1);
    }
    return 0;

}
