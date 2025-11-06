Q - Write a c proram for armstrong number
-----------------------------------------------------------------------
#include <stdio.h>

int main() {
    int n, sum=0, cube,r, temp;
    
    printf("Enter Number : ");
    scanf("%d", &n);
    temp = n;
    
    while(n>0){
       r= n%10;
       cube = r*r*r;
       sum = sum + cube;
       n = n/10;
    }
    n = temp;
    
    if(n == sum){
        printf("It is Armstrong Number");
    }else{
        printf("It is not Armstrong Number");
    }
    
    
    
  

}
