Q1 - Write a C program  to round of the number to it's next and previous multiplication of 10?

#include <stdio.h>

void main (){

int n;
printf("Enter n value");
scanf("%d", &n);

n%10 >=5 && printf("Next multiple is %d", (n/10+1) * 10);
n%10<5 && printf("previous multiple is %d", (n/10*10));

}
