/*Problem Statement

Write a C program that accepts an integer from the user and determines whether the number is Even or Odd.

Input
A single integer entered by the user.

Output
Print "Even" if the number is divisible by 2.
Print "Odd" otherwise.

Bonus Challenge ⭐
If the user enters 0, print:
Zero is an even number.
instead of simply printing "Even".

Extra Challenge ⭐⭐
After checking whether the number is even or odd, also determine whether it is:
Positive
Negative
Zero*/

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
