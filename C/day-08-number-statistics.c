/*Day 8 - Number Statistics

Problem Statement
Write a C program that accepts N integers from the user and performs
basic statistical analysis on the entered numbers.

The program should calculate and display:
1. Sum of all numbers
2. Average of all numbers
3. Largest number
4. Smallest number
5. Number of even numbers
6. Number of odd numbers

Requirements
- Accept the number of integers (N) from the user.
- N must be greater than 0.
- Store all the entered integers in an array.
- Use a loop to accept the numbers from the user.
- Calculate the sum and average of all numbers.
- Determine the largest and smallest numbers.
- Count the number of even and odd numbers.
- Use the modulus (%) operator to determine whether a number is even
  or odd.
- Display the average up to two decimal places.
- Do not use built-in functions to determine the largest or smallest
  number.
- Display an appropriate error message if an invalid value of N is entered.

Example
Input:
Enter Number of Integers: 6

Enter Number 1: 12
Enter Number 2: 7
Enter Number 3: 25
Enter Number 4: 10
Enter Number 5: 8
Enter Number 6: 15

Output:
Sum: 77
Average: 12.83
Largest Number: 25
Smallest Number: 7
Even Numbers: 3
Odd Numbers: 3

Input Validation
- The number of integers must be greater than 0.
- If an invalid value is entered, ask the user to enter the number
  of integers again.

Bonus Challenge
Also calculate and display:
- Sum of all even numbers
- Sum of all odd numbers

Example:
Sum of Even Numbers: 30
Sum of Odd Numbers: 47

The program should correctly handle positive numbers, negative numbers,
zero, duplicate values, even numbers, odd numbers, and decimal averages.*/

#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter Number of Integers: ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("Please enter a number greater than 0.\n");
        }
    } while (n <= 0);

    int arr1[n], i = 0, sum = 0, even_count = 0, odd_count = 0, even_sum = 0, odd_sum = 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr1[i]);
        sum += arr1[i];

        if (arr1[i] % 2 == 0)
        {
            even_count += 1;
            even_sum += arr1[i];
        }
        else
        {
            odd_count += 1;
            odd_sum += arr1[i];
        }
    }

    float avg = (float)sum / n;
    int max = arr1[0], min = arr1[0], j = 0;

    for (j = 1; j < n; j++)
    {
        if (arr1[j] > max)
        {
            max = arr1[j];
        }

        if (arr1[j] < min)
        {
            min = arr1[j];
        }
    }

    printf("\nSum: %d", sum);
    printf("\nAverage: %.2f", avg);
    printf("\nLargest Number: %d", max);
    printf("\nSmallest Number: %d", min);
    printf("\nEven Numbers Count: %d", even_count);
    printf("\nOdd Numbers Count: %d", odd_count);
    printf("\nSum of Even Numbers: %d", even_sum);
    printf("\nSum of Odd Numbers: %d", odd_sum);

    return 0;
}