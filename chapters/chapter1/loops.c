
#include <stdio.h>
int main()
{

   int c;

   while (c != 10)
   {
      printf("Enter a value :");
      c = getchar();

      printf("\nYou entered: %d \n", c);
      putchar(c);
      c++;
   }

   return 0;
};
