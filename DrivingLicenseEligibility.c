Question 4: Driving License Eligibility
_______________________
Problem Statement:
________________________
Write a C program to check whether a person is eligible for a driving license.

Input the age of the person.

Input whether the person has Aadhaar card (1 = Yes, 0 = No).

Conditions:

If age < 18 → “Not eligible (must be 18+)”

If age ≥ 18 and has Aadhaar → “Eligible for Driving License”

If age ≥ 18 but no Aadhaar → “Aadhaar card required for license”

If age ≤ 0 → “Invalid age input”

Sample Input / Output:

Input:
Age = 20
Has Aadhaar = 0

Output:
Aadhaar card required for license

============================================================================
code - 
#include <stdio.h>

int main() {
    
int Age;
int isAadhar;

printf("Enter Age : ");
scanf("%d%d",&Age,&isAadhar);
(Age <= 0 )&& printf("Invalid age input")||
(Age < 18) && printf("Not eligible (must be 18+)")||(isAadhar==1)&&
printf("Eligible for Driving License")||
printf("Aadhaar card required for license");

return 0;
}
