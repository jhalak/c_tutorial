#include <stdio.h> 
 
int main(void) { 
  int var1; 
  int var2;
  scanf("%d",&var1);
  scanf("%d",&var2);
  if(var2==0)
   {printf("Error. Division by zero.");}
  else
   {printf("%d", var1 / var2); }
  return 0; 
}
