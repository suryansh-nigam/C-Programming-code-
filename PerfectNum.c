Q- write a c program for perfect num or not 
=========================================================
  
#include <stdio.h>

int main() {
  int n, sum=0, i;
  printf("Enter a number: ");
  scanf("%d",&n);
  
  for(i=1; i<= n/2; i++){
      if(n%i == 0){
          sum += i;
    
      }
  }
  if(n==sum){
      printf("It is a perfect number");
  }else {
      printf("It is not perfect number");
  }
}
