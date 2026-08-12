/*
Day 5 - Simple Menu-Driven Calculator

Problem Statement

Write a C program to create a menu-driven calculator that accepts two
floating-point numbers and performs an arithmetic operation selected
by the user.

The calculator should provide the following options:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Remainder
6. Exit

Requirements

- Display a menu containing all available operations.
- Accept the user's choice using scanf().
- Use a switch statement to perform the selected operation.
- Accept two floating-point numbers for each calculation.
- Display calculation results up to two decimal places.
- Handle division by zero and display an appropriate error message.
- The remainder operation should be performed using the integer
  portions of the entered numbers.
- Continue displaying the menu until the user selects Exit.
- Use a separate function to accept the two numbers.
- Use pointers to pass the numbers to the input function.

Example

========================
SIMPLE CALCULATOR
========================

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Remainder
6. Exit

Enter your choice: 1

Enter Number 1: 10.5
Enter Number 2: 4.5

Addition of 10.50 and 4.50 is 15.00

The program should continue running until the user selects option 6.
*/

#include <stdio.h>

void inputNum(float *num1, float *num2)
{
    printf("\nEnter Number 1: ");
    scanf("%f", num1);
    printf("Enter Number 2: ");
    scanf("%f", num2);
}

int main()
{
    float num1 = 0, num2 = 0;
    int choice;

    printf("========================");
    printf("\nSIMPLE CALCULATOR");
    printf("\n========================");

    while (1)
    {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("Program Exited Successfully");
            break;
        }

        switch (choice)
        {
        case 1:
            inputNum(&num1, &num2);
            printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, num1 + num2);
            break;

        case 2:
            inputNum(&num1, &num2);
            printf("Substraction of %.2f and %.2f is %.2f\n", num1, num2, num1 - num2);
            break;

        case 3:
            inputNum(&num1, &num2);
            printf("Product of %.2f and %.2f is %.2f\n", num1, num2, num1 * num2);
            break;

        case 4:
            inputNum(&num1, &num2);
            if (num2 == 0)
            {
                printf("Division by zero is not possible.\n");
            }
            else
            {
                printf("Division of %.2f and %.2f is %.2f\n", num1, num2, num1 / num2);
                
            }
            break;

        case 5:
            inputNum(&num1, &num2);
            int result = (int)num1 % (int)num2;
            printf("Remainder of %d and %d is %d\n", (int)num1, (int)num2, result);
            break;

        default:
            printf("Please Enter Valid Choice Number!!\n");
            break;
        }
    }
}
