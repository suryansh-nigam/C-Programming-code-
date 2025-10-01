uestion 1: Product Discount Calculator
____________________________
Problem Statement:
____________________________
Write a C program to calculate the final price of a product after applying a discount.

The user will enter the product price and discount percentage.

If the discount is valid (0–100) and price is greater than 0, then display the final price.

Otherwise, display “Invalid input!”.

Sample Input / Output:

Input:
Enter product price: 1000
Enter discount percentage: 10

Output:
Final Price = 900.00
====================================================
code -
#include <stdio.h>
int main()
{
   float product_price;
   float discount_percentage;
   printf("Enter Product price:\n");
   scanf("%f", &product_price);
   printf("Enter discount-percentage:\n");
   scanf("%f", &discount_percentage);
   
   
   (product_price >= 0 && (discount_percentage >= 0 && discount_percentage <=100)) ? printf("final price %f", product_price - product_price * discount_percentage/100) : printf("Invalid Input!");
   
   return 0;
}
