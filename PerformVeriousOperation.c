
Write a C program to perform arithmetical operation based on user input using scanf()
[ take values from user and use float variable ]
	if user enter '+' operator then addition
	if user enter '-' operator then subtraction 

case 1:
input :
Enter a operator(+,-,*,/) : +
Enter first number : 5
Enter second number : 2
output :
Addition is : 7

case 2:
input :
Enter a operator(+,-,*,/) : *
Enter first number : 10
Enter second number : 2
output :
multiplication : 20

===============================================================
#include <stdio.h>

int main() {
    char op;
    float a, b;

    scanf(" %c", &op);
    scanf("%f", &a);
    scanf("%f", &b);

    if (op == '+') {
        printf("Addition is: %.2f\n", a + b);
    }
    else if (op == '-') {
        printf("Subtraction is: %.2f\n", a - b);
    }
    else if (op == '*') {
        printf("Multiplication is: %.2f\n", a * b);
    }
    else if (op == '/') {
        if (b != 0)
            printf("Division is: %.2f\n", a / b);
        else
            printf("Division by zero error\n");
    }
    else {
        printf("Invalid Input\n");
    }

    return 0;
}
