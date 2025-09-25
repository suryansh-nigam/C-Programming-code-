Q - Salary Increment

Your salary is ₹50,000. You get a 10% increment. Calculate the new salary.

code - 

#include <stdio.h>

void main() {
    float salary  = 50000.0;
    float increment_percentage  = 10.0;
    
    float increment_amount = (salary * increment_percentage)/100;
    
    float new_salary = salary + increment_amount;
    printf("Old salary: ₹%.2f\n", salary);
    printf("New salary after %.2f%% increment: ₹%.2f\n", increment_percentage, new_salary);

}

output  - 
Old salary: ₹50000.00
New salary after 10.00% increment: ₹55000.00

