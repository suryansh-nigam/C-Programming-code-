Q - Finding single digit no or not without using if..else 

#include <stdio.h>

void main (){

int n;
printf("Enter n value");
scanf("%d", &n);

n >=  0 && n <=9 && puts("It is single digit no ");
n < 0 || n >10 && puts("Not a single digit no ");


}
