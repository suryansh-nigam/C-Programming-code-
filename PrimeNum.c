Q - write a c program for prime num .

code ----------------------------------------------------
  // Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, count=0;
    printf("Enter Number : ");
    scanf("%d", &n);
    
    for(int i =1; i <= n; i++){
        if(n%i == 0){
            count++;
        }
    }
        if(count == 2){
            printf("It is prime number");
        }else{
            printf("It is not prime number");

        }
        return 0; 
}
