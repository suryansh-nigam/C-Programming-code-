Q - Write a c program to print add, sub, mul, div, mod

#include <stdio.h>

void main() {
    
    int a, b;
    printf("Enter a value");
    scanf("%d", &a);
    printf("Enter b value");
    scanf("%d", &b);
    
    printf("Addition is %d\n", (a+b));
    printf("Subtraction is %d\n", (a-b));
    printf("Multiplication is %d\n", (a*b));
    printf("Division is %d\n", (a/b));
    printf("Modulation is %d",(a%b) );
    
}
