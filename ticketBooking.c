Qus - You are developing a program for an online bus ticket booking platform called "BusTicketBooker." 

 The platform offers tickets for a fixed price of Rs. 300 per seat. However, there are discounts available for senior citizens. 
        If a passenger's age is between 60 and 100 (inclusive), they will receive a 20% discount on the total booking cost.

        Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator. The program should then display the bill with a suitable message, including the total cost and the discount amount (if applicable).

        Your task is to implement the program logic inside the main function by using only Ternary Operator.


Example 1: Passenger is not a senior citizen
Sample Input: 
              number of tickets: 3
              age of the passenger: 45

Sample Output:
              Total cost before discount: Rs. 900.00
              Discount amount: Rs. 0.00
              ( Rs. 900.00


Example 2: Passenger is a senior citizen
Sample Input:
              number of tickets: 2
              age of the passenger: 65

Sample Output:
              Total cost before discount: Rs. 600.00
              Discount amount: Rs. 120.00
             Total cost after discount: Rs. 480.00

======================================================================================
code  = 
// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int num1, age, discount;
   float Totaldiscount, total;
   printf("Enter number of tickets : ");
   scanf("%d", &num1);
   printf("Enter passenger age : ");
   scanf("%d", &age);
   total = num1 * 300;
   
   printf("Total cost before discount: Rs. %.2f\n", total);
   (age >= 60 && age<=100) ? (discount = 20 ) : (discount = 0);
   Totaldiscount = total*discount/100;
   
   printf("Discount amount : Rs. %.2f\n",Totaldiscount );
   printf("Total cost after discount: Rs. %.2f\n ", (total-Totaldiscount));
   
   return 0;
}
