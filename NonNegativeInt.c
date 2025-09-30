Que 4 :
--------
Write a C program to check if two given non-negative integers have the same last digit.

input :
	Enter two number : 23 43 
output :	
	last digit is same

input :
	Enter two number : 89 43 
output :	
	last digit not same
=========================================================================
code - 

#include <stdio.h>
int main(){

int a, b;
printf("Enter a number:");
scanf("%d", &a);
printf("Enter b number:");
scanf("%d", &b);

int result = a-b;
result%10==0 && printf("last digit is same") || printf("last digit not same");



    return 0;
}
