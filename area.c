#include <stdio.h>
int main()
{
  int l, b, area;

  printf("\n Enter the Lenth: "); /* printf is the out put  */
  scanf(" %d ", &l);              /* %d is used to call the intiger var/value */

  printf("\n Enter the Breadth: ");
  scanf(" %d ", &b); /* scanf is the in-put  */

  area = l * b;
  printf(" The area is %i \n", area);
};
