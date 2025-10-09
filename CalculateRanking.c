Qus - Problem Statement

Write a C program to calculate the ranking of a cricketer based on his performance in 5 matches.

Requirements

The program should:

Accept the runs scored in 5 matches as input.

Calculate the total runs and the average runs.

Determine the ranking using the following criteria:

Average Runs	Ranking
90 – 100	Excellent
70 – 89	        Very Good
50 – 69	        Good
30 – 49	        Average
Below 30	Poor

Restrictions:

You must use the ternary operator (?:) for ranking calculation.

Do not use if, else, switch, or loops.

Validation:

Runs in each match must be 0 or more.

If any run value is negative, print "Invalid input" and stop execution.

Input Format

Enter 5 integer values separated by spaces (runs scored in each match).

Output Format

Print the total runs, average runs (2 decimal places), and the ranking.

Or, print "Invalid input" if any run is negative.

Test Cases:

✅ Test Case 1

Input:

120 85 90 100 95


Output:

Total Runs = 490
Average Runs = 98.00
Ranking = Excellent

✅ Test Case 2

Input:

60 55 70 65 50

Output:

Total Runs = 300
Average Runs = 60.00
Ranking = Good

✅ Test Case 3

Input:

25 20 15 30 18

Output:

Total Runs = 108
Average Runs = 21.60
Ranking = Poor

✅ Test Case 4 (Invalid Input Case)

Input:

80 -10 75 60 90

Output:

Invalid input
==========================================================================================================
CODE-

#include<stdio.h>
int main() {
   
   int runs1, runs2, runs3, runs4, runs5;
   
   printf("Enter the Runs Match 1 : ");
   scanf("%d", &runs1);
   printf("Enter the Runs Match 2 : ");
   scanf("%d", &runs2);
   printf("Enter the Runs Match 3 : ");
   scanf("%d", &runs3);
   printf("Enter the Runs Match 4 : ");
   scanf("%d", &runs4);
   printf("Enter the Runs Match 5 : ");
   scanf("%d", &runs5);
   
   
   int Total = runs1 + runs2 + runs3 + runs4 + runs5;
   printf("Total runs is : %d\n", Total);
   
   int Average = Total/5;
   printf("Average is : %d\n", Average);
   
   (Average >= 90 && Average <= 100) ? printf("Ranking is : Excllent") :
   (Average >= 75 && Average <= 89) ? printf("Ranking is :Very good"):
   (Average >= 60 && Average <= 74) ? printf("Ranking is :Good"):
   (Average >= 45 && Average <= 59) ? printf("Ranking is :Average"):
   (Average <= 45) ? printf("Ranking is :Poor") : printf("Invalid input");
   
   }




