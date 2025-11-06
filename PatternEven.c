
#include <stdio.h>

int main()
{
  
  
  
  int n = 4;
  int a = 2;

  
  for(int i=1; i<=n; i++){
      for(int j=1; j<=n+1; j++){
          printf("%3d", a);
          a= a+2;
      }
      printf("\n");
  }
   return 0;
}
