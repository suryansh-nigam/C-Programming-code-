Que 3 :
--------

Write a C program to check a given integer three digit or not using ternary operator.

if three digit print "True" 
if not three digit print "false"

input :
	Enter a number :123
output :
	true 
input :
	Enter a number :1233
output :
	false
===========================================================================================
code  - 
#include <stdio.h>

int main() {
   
   int n;
   printf("Enter a number:");
   scanf("%d", &n);
   
   ((n>=100 && n<=999) || (n<= -100 && n>= -999)) ? printf("It is three digit number : true") : printf("It is not three digit number: false");
   
 
    return 0;
}
