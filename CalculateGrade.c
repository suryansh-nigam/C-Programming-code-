Que-1
_______________
📘 Programming Question
Problem Statement

Write a C program to calculate the grade of a student based on the marks obtained in 5 subjects.

Requirements

The program should:

Accept marks of 5 subjects as input.

Calculate the total and average marks.

Determine the grade using the following criteria:

Average Marks	Grade
90 – 100	A
75 – 89	        B
60 – 74	        C
45 – 59	        D
Below 45	F

Restrictions:

You must use the ternary operator (?:) for grade calculation.

Do not use if, else, switch, or loops.

Validation:

Marks must be between 0 and 100.

If any mark is negative or greater than 100, print "Invalid input" and stop execution.

Input Format

Enter 5 integer values separated by spaces (each between 0 and 100).

Output Format

Print the total marks, average marks (2 decimal places), and the grade.

Or, print "Invalid input" if marks are out of range.

Test Cases
✅ Test Case 1

Input:

95 90 85 92 88


Output:

Total = 450
Average = 90.00
Grade = A

✅ Test Case 2

Input:

70 65 60 62 68


Output:

Total = 325
Average = 65.00
Grade = C

✅ Test Case 3 (Fail Case)

Input:

30 40 25 35 28


Output:

Total = 158
Average = 31.60
Grade = F

✅ Test Case 4 (Invalid Input Case)

Input:

90 85 -10 95 80


Output:

Invalid input
===============================================================================================
code  - 

#include<stdio.h>
int main() {
   
   int marks1, marks2, marks3, marks4, marks5;
   
   printf("Enter the Marks : ");
   scanf("%d", &marks1);
   printf("Enter the Marks : ");
   scanf("%d", &marks2);
   printf("Enter the Marks : ");
   scanf("%d", &marks3);
   printf("Enter the Marks : ");
   scanf("%d", &marks4);
   printf("Enter the Marks : ");
   scanf("%d", &marks5);
   
   
   int Total = marks1 + marks2 + marks3 + marks4 + marks5;
   printf("Total Marks is : %d\n", Total);
   
   int Average = Total/5;
   printf("Average is : %d\n", Average);
   
   (Average >= 90 && Average <= 100) ? printf("Grade A") :
   (Average >= 75 && Average <= 89) ? printf("Grade B"):
   (Average >= 60 && Average <= 74) ? printf("Grade C"):
   (Average >= 45 && Average <= 59) ? printf("Grade D"):
   (Average <= 45) ? printf("Grade F") : printf("Invalid input");
   
   }


output = 
Enter the Marks : 100
Enter the Marks : 100
Enter the Marks : 100
Enter the Marks : 100
Enter the Marks : 99
Total Marks is : 499
Average is : 99
Grade A
