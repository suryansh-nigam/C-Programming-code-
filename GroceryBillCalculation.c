Q - Scenario: Grocery Store Bill Calculation 
You went to a grocery store and bought:

2 kg of apples (₹120 per kg)

1 kg of bananas (₹60 per kg)

1.5 kg of oranges (₹80 per kg)

Write a C program that calculates:

1. The total cost of each fruit.

2. The overall bill amount.

3. How much you need to pay if you give ₹500.

code - 

#include <stdio.h>

void main() {
    int a =2 * 120;
    int b = 1 * 60;
    float o = 1.5 * 80;
    
    printf("2 kg of apples: %d\n", a);
    printf("1 kg of bananas: %d\n", b);
    printf("1.5 kg of oranges: %.2f\n", o);
    
    float total  = a + b + o;
    printf("The overall bill amount: %.2f\n", total);
    
    int paid = 500;
    float balance = paid - total;
    
    printf("Amount Paid: %d\n", paid);
    printf("Balance to return: %.2f\n", balance);

}

output - 
2 kg of apples: 240
1 kg of bananas: 60
1.5 kg of oranges: 120.00
The overall bill amount: 420.00
Amount Paid: 500
Balance to return: 80.00
