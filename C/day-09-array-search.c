/*Day 9 - Array Search
Problem Statement

Write a C program that accepts N integers from the user, stores them
in an array, and searches for a user-specified number.

The program should determine:
1. Whether the searched number exists in the array.
2. The position(s) at which the number occurs.
3. The total number of times the number occurs.

Requirements
- Accept the number of integers (N) from the user.
- N must be greater than 0.
- Store the entered integers in an array.
- Accept the number to search after all array elements have been entered.
- Search the array using a loop.
- Display every position where the searched number is found.
- Display the total number of occurrences.
- If the number is not found, display an appropriate message.
- Do not use any built-in search function.
- Remember that C arrays use zero-based indexing.

Example
Input:
Enter Number of Integers: 7

Enter Number 1: 10
Enter Number 2: 25
Enter Number 3: 15
Enter Number 4: 25
Enter Number 5: 30
Enter Number 6: 25
Enter Number 7: 40

Enter Number to Search: 25

Output:
25 found in the array.

Positions:
2
4
6

Number of Occurrences: 3

If the number is not found:
Input:
Enter Number to Search: 100

Output:
100 was not found in the array.
Number of Occurrences: 0

Bonus Challenge
Also determine and display the first and last occurrence of the
searched number.

Example:
First Occurrence: Position 2
Last Occurrence: Position 6

Extra Challenge
Calculate and display the sum of all occurrences of the searched number.

Example:
25 + 25 + 25 = 75
Sum of Occurrences: 75

The program should correctly handle positive numbers, negative numbers,
zero, duplicate values, and cases where the searched number is not
present in the array.
*/