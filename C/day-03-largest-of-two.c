/*Problem Statement

Write a C program that accepts two integers from the user and determines which number is larger.

Input
Two integers entered by the user.

Output
Print the larger number.
If both numbers are equal, print that they are equal.

Bonus Challenge ⭐

Also determine the smaller number.

For example:
Enter first number: 25
Enter second number: 17

Larger number: 25
Smaller number: 17*/

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