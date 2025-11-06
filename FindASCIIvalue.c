Q-  write a c program where user type a character and output is its ascii value.


================================================================
#include <stdio.h>

int main() {
  char ch;
  printf("Enter character : ");
  scanf("%c", &ch);
  
  printf("%c ascii value is : %d", ch, ch);
}
