#include <stdio.h>
int main(void) {
   int i = 12;
   
   printf("Value of i is:  %d\n", i);

   i = i + 1;
   printf("Value of i is:  %d\n", i);

   i = i - 3;
   printf("Value of i is:  %d\n", i);

   i = i * 4;
   printf("Value of i is:  %d\n", i);

   i = i / 2;
   printf("Value of i is:  %d\n", i);

   i++;
   printf("Value of i is:  %d\n", i);

   ++i;
   printf("Value of i is:  %d\n", i);

   i--;
   printf("Value of i is:  %d\n", i);

   --i;
   printf("Value of i is:  %d\n", i);
   
   return 0;
}
