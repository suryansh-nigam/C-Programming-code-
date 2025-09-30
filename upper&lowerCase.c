Que 1 :
--------

 Write a program to convert  uppercase Character to Lowercase Character and Lowercase Character to uppercase Character without using ternary operator and control statements.


Sample Input:-
	Enter a Uppercase Character : H
Output-
	Lowercase Character : h


Sample Input:-
	Enter a Lowercase  Character : a
Output-
	Uppercase Character : A
==================================================================================
  
code - 
#include <stdio.h>

int main() {
    
    char l, u ;
    printf("Enter a character:"  );
    scanf("%c", &l);
    
    (l>='A' && l<='Z') && printf("Lower case is %c\n", l + 32) || printf("Invalid\n");
    
    
    printf("Enter a character:");
    scanf(" %c ",&u);
    (u>=97 && u<=122) && printf("Uppper case is %c\n", u - 32) || printf("Invalid");

    return 0;
}



