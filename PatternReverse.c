Q -

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

============================================

#include <stdio.h>

int main()
{
  
  int n=4;
  

  for(int i=1; i<=n; i++){
      for(int j=5; j!=0; j--){
          printf("%3d", j);
          
      }
      printf("\n");
  }
   return 0;
}
