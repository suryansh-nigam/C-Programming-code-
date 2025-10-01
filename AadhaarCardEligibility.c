Question 3: Aadhaar Card Eligibility
___________________
Problem Statement:
___________________
Write a C program to check Aadhaar card eligibility based on age.

If age is less than or equal to 0 → “Invalid age input”

If age is less than 5 → “Not eligible (minimum age is 5 years)”

If age is 5 or above → “Eligible for Aadhaar card”

Sample Input / Output:

Input:
Enter age: 4

Output:
Not eligible (minimum age is 5 years)
===============================================
code - 
#include <stdio.h>

int main() {
    
int age;
printf("Enter age : ");
scanf("%d", &age);

(age <=0 && printf("Invalid age input"));
(age <5 && printf("Not eligible (mininmum age is 5 years)"));
(age >=5 && printf("Eligible for Aadhar Card"));

return 0;

    
}
