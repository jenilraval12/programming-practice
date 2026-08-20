/*Day 10 - Reverse an Array

Problem Statement
Write a C program that accepts N integers from the user, stores them
in an array, and displays the elements of the array in reverse order.

Requirements
- Accept the number of integers (N) from the user.
- N must be greater than 0.
- Store the entered integers in an array.
- Use a loop to accept the array elements.
- Display the original array.
- Display the elements in reverse order.
- Do not use any built-in reverse function.
- For the basic version, do not create a second array.

Example
Input:
Enter Number of Integers: 5

Enter Number 1: 10
Enter Number 2: 20
Enter Number 3: 30
Enter Number 4: 40
Enter Number 5: 50

Output:
Original Array:
10 20 30 40 50

Reversed Array:
50 40 30 20 10


Bonus Challenge
Reverse the array itself by swapping its elements instead of only
displaying them in reverse order.

Example:
Original Array:
10 20 30 40 50

Array After Reversal:
50 40 30 20 10


Extra Challenge
Determine whether the array is a palindrome.

An array is considered a palindrome if it reads the same from
left to right and right to left.

Example:
Input:
1 2 3 2 1

Output:
The array is a palindrome.

Input:
1 2 3 4 5

Output:
The array is not a palindrome.

The program should correctly handle positive numbers, negative numbers,
zero, duplicate values, and arrays containing a single element.
*/

#include <stdio.h>

int main()
{
    int n;
    int palindrome = 1;

    do
    {
        printf("Enter Length of the Array: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("\nPlease Provide Length More Than 0.\n");
        }
    } while (n <= 0);

    int numbers[n];
    int temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Original Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] != numbers[n - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        temp = numbers[i];
        numbers[i] = numbers[n - i - 1];
        numbers[n - i - 1] = temp;
    }

    printf("\nReveresed Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    if (palindrome == 1)
    {
        printf("\nThe Array is a Palindrome.");
    }
    else
    {
        printf("\nThe Array is not a Palindrome.");
    }

    return 0;
}