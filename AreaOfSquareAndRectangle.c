Q8- Write a C program to calculate and print the area of square and rectangle.

input as - Side of square is : 5
         - Length and breadth of rectangle is: 4,5

output - The area of the square with side 5 is : 25
       - The area of the rectangle with length 4 and breadth 5 is: 20

Logic - We have to take 3 input for square, length, breadth
      - Area of square =  s*s
      - Area of Rectangle = length*breadth

Code - 

#include <stdio.h>

void main() {
  
int s,l,b;
scanf("%d%d%d",&s,&l,&b);

printf("Area of Square: %d\n",(s*s));

printf("Area of Rectangle: %d",(l*b));

}
