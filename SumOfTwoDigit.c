Q - Write a C program to sum of the numbers by using operator concepts?


#include <stdio.h>

void main() {
    int a, sum;
    printf(" Enter a two digit number");
    scanf("%d",&a);
    
    sum = (a/10) + (a%10);
    printf(" Sum f digits = %d\n", sum);

}
