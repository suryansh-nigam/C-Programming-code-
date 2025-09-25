Q4 - Write a C program to swap a number without using 3rd variable ?
 
 input as  a = 50, b= 70
 output as a = 70, b= 50

#include <stdio.h>

int main() {
    int a = 50, b = 70;

    a = a + b; // Now a = 120
    b = a - b; // b = 120 - 70 = 50
    a = a - b; // a = 120 - 50 = 70

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
