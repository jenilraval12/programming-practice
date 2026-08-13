/*Day 6 - Leap Year Checker

Problem Statement
Write a C program that accepts a year from the user and determines
whether the given year is a leap year or not.

Leap Year Rules
A year is considered a leap year if:
- It is divisible by 400, OR
- It is divisible by 4 but not divisible by 100.

Requirements
- Accept a year as an integer using scanf().
- Use the modulus (%) operator to check divisibility.
- Use if-else statements and logical operators to implement the
  leap year conditions.
- Display whether the entered year is a leap year or not.
- Handle invalid input such as zero or negative years.

Examples
Input:
2024

Output:
2024 is a Leap Year.


Input:
1900
Output:
1900 is not a Leap Year.

The program should correctly handle leap years, non-leap years,
century years, and invalid year values.*/

#include <stdio.h>

int main()
{
    int year, i;
    printf("===================");
    printf("\nLeap Year Checker");
    printf("\n===================");

    do
    {
        printf("\nEnter Year To Check: ");
        scanf("%d", &year);
        if (year >= 1000 && year <= 9999)
        {
            i = 0;
        }
        else
        {
            printf("Please Enter a Valid Year!\n");
            i = 1;
        }
    } while (i == 1);

    if(year%400==0)
    {
        printf("%d is A Leap Year",year);
        printf("\nFebruary Month has 29 Days!!");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("%d is a Leap Year",year);
        printf("\nFebruary Month has 29 Days!!");       
    }
    else{
        printf("%d is NOT a Leap Year!",year);
        printf("\nFebruary Month has 28 Days!!");
    }
    return 0;
}