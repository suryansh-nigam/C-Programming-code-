Q- Loan EMI Interest Calculation
You borrowed ₹10,000 with 5% annual interest.
How much interest do you pay in a year?

code  - 
#include <stdio.h>

void main() {
  float loan_amount = 10000.0;
  float interest_rate = 5.0;
  float interest_paid = (loan_amount * interest_rate)/100;
      printf("Interest to be paid in one year on ₹%.2f at %.2f%% is ₹%.2f\n",
             loan_amount, interest_rate, interest_paid);
}

output- Interest to be paid in one year on ₹10000.00 at 5.00% is ₹500.00
