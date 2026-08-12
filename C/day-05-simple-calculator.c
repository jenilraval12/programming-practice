/*Problem Statement

Write a C program that accepts two numbers and an arithmetic operator from the user, then performs the selected operation.

The calculator should support:

Addition +
Subtraction -
Multiplication *
Division /
Remainder %


Bonus Challenge ⭐

Allow the user to perform the calculation using floating-point numbers so that something like:

10 / 4

produces:
Result: 2.50

You'll need to think about whether int is still the appropriate data type.

Extra Challenge ⭐⭐

Create a menu-based calculator:

========================
    CALCULATOR
========================

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Remainder

Enter your choice:

Then use switch based on the user's choice number rather than directly switching on +, -, etc.*/

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
