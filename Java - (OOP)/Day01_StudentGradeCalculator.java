/*
Day 1 - Student Information and Grade Calculator

Problem Statement:

Write a Java program that accepts a student's name, roll number,
and marks in three subjects. Calculate and display the total marks,
average marks, percentage, and grade based on the percentage.

Requirements:
- Accept student details and marks using Scanner.
- Validate marks between 0 and 100.
- Calculate total, average, and percentage.
- Determine grade using if-else statements.

Example:
Enter student name: Jenil
Enter roll number: 101
Enter marks in Subject 1: 85
Enter marks in Subject 2: 92
Enter marks in Subject 3: 78

----- Student Result -----
Name       : Jenil
Roll No    : 101
Total      : 255
Average    : 85.0
Percentage : 85.0%
Grade      : B
 */

import java.util.Scanner;

public class Day01_StudentGradeCalculator {

    public static void main(String[] args) {

        String studentName = "";
        int rollNo;
        int total;
        float avg;
        char grade;
        int mark1, mark2, mark3;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Student Name: ");
        studentName = sc.nextLine();

        System.out.print("Enter Roll Number: ");
        rollNo = sc.nextInt();

        System.out.print("Enter Marks in Subject 1 (0-100): ");
        mark1 = sc.nextInt();

        System.out.print("Enter Marks in Subject 2 (0-100): ");
        mark2 = sc.nextInt();

        System.out.print("Enter Marks in Subject 3 (0-100): ");
        mark3 = sc.nextInt();

        if (mark1 < 0 || mark1 > 100 ||
                mark2 < 0 || mark2 > 100 ||
                mark3 < 0 || mark3 > 100) {
            System.out.println("Invalid marks! Marks must be between 0 and 100.");
            System.exit(0);
        }

        total = mark1 + mark2 + mark3;
        avg = (float) total / 3;

        if (avg >= 90) {
            grade = 'A';
        } else if (avg >= 80) {
            grade = 'B';
        } else if (avg >= 70) {
            grade = 'C';
        } else if (avg >= 60) {
            grade = 'D';
        } else if (avg >= 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }

        System.out.println("----- Student Result -----");
        System.out.println("Name\t\t:" + studentName);
        System.out.println("Roll No\t\t:" + rollNo);
        System.out.println("Total\t\t:" + total);
        System.out.println("Average\t\t:" + avg);
        System.out.println("Percentage\t:" + avg + "%");
        System.out.println("Grade\t\t:" + grade);

        sc.close();
        return;
    }
}