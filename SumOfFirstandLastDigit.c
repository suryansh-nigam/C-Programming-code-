Q - Write a c program to print sum of first and last digit of given by 3 digit number

input as  = 123
output = 4

#include <stdio.h>

void main() {
  
  int n;
  printf("Enter 3 digit number");
  scanf("%d", &n);
  printf("Sum of first and last digit number %d",(n/100)+(n%10));
  
  for understanding  // 100)123(1           123/100      => 1
    //     100
    //     ---
    //      23
         
    //      10)123(12        123%10  =>3
    //         10
    //         --
    //          23
    //          20
    //          --
    //           3

}
