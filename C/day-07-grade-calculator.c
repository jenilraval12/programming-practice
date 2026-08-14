/*Day 7 - Student Grade Calculator

Problem Statement
Write a C program that accepts the number of subjects and the marks
obtained in each subject. The program should calculate the total marks,
average marks, and determine the student's grade based on the average.

Requirements
- Accept the number of subjects from the user.
- Accept marks for each subject using a loop.
- Each subject's marks must be between 0 and 100.
- Calculate the total marks obtained across all subjects.
- Calculate the average marks.
- Display the total marks and average marks up to two decimal places.
- Determine the grade based on the average using if, else if, and else.
- Display whether the student has Passed or Failed.
- The student passes if the average is 50 or above.
- Display an appropriate error message for invalid input.

Grading Criteria
Average Marks    Grade
90 - 100           A
80 - 89            B
70 - 79            C
60 - 69            D
50 - 59            E
Below 50           F

Example
Input:

Enter Number of Subjects: 5

Enter Marks for Subject 1: 85
Enter Marks for Subject 2: 92
Enter Marks for Subject 3: 78
Enter Marks for Subject 4: 88
Enter Marks for Subject 5: 90

Output:
Total Marks: 433
Average Marks: 86.60
Grade: B
Result: Pass

Input Validation
- The number of subjects must be greater than 0.
- Marks for each subject must be between 0 and 100.
- Invalid marks should not be included in the total.
- Display an appropriate error message for invalid input.

Bonus Challenge
If an invalid mark is entered, ask the user to enter the mark again
until a valid mark between 0 and 100 is provided.

Extra Challenge
Also determine and display the highest and lowest marks obtained
among all subjects.

Example:
Highest Marks: 92
Lowest Marks: 78

The program should correctly handle different numbers of subjects,
valid and invalid marks, boundary values, and decimal average results.
*/
#include <stdio.h>

int main()
{
    int sub_count, flag, total_marks = 0;
    char grade;
    float avg_marks;

    printf("=============================\n");
    printf("Result and Grade Calculation\n");
    printf("=============================\n");

    do
    {
        printf("Enter Number of Subjects: ");
        scanf("%d", &sub_count);

        if (sub_count < 1)
        {
            printf("Please Enter a Valid Number of Subjects!\n");
        }
    } while (sub_count < 1);

    int marks[sub_count];
    int i = 1;
    do
    {
        printf("Enter Marks for Subject %d: ", i);
        scanf("%d", &marks[i - 1]);
        if (marks[i - 1] < 0 || marks[i - 1] > 100)
        {
            printf("Please Enter Marks In Between Range From 0 to 100!\n");
        }
        else
        {
            total_marks = total_marks + marks[i - 1];
            i++;
        }

    } while (i <= sub_count);

    avg_marks = (float)total_marks / sub_count;

    if (avg_marks >= 90)
    {
        grade = 'A';
    }
    else if (avg_marks >= 80)
    {
        grade = 'B';
    }
    else if (avg_marks >= 70)
    {
        grade = 'C';
    }
    else if (avg_marks >= 60)
    {
        grade = 'D';
    }
    else if (avg_marks >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    int max_marks = marks[0];
    int min_marks = marks[0];

    for (int j = 1; j < sub_count; j++)
    {
        if (max_marks < marks[j])
        {
            max_marks = marks[j];
        }
        if (min_marks > marks[j])
        {
            min_marks = marks[j];
        }
    }

    printf("Total Marks Scored By The Student: %d\n", total_marks);
    printf("Average Marks Scored By The Student: %.2f\n", avg_marks);
    printf("Grade of The Student: %c\n", grade);
    if (avg_marks >= 50)
    {
        printf("Result of Student: PASS\n");
    }
    else
    {
        printf("Result of Student: FAILED\n");
    }
    printf("Highest Marks Scored by the Student: %d\n", max_marks);
    printf("Lowest Marks Scored by the Student: %d\n", min_marks);
    return 0;
}