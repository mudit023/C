// printing even numbers. Asking user the upper limit.
#include<stdio.h>
int main()
{
  int o=2;
  int in;
  printf("Enter the upper limit of the even numbers: ");
  scanf("%i",&in);
  while (o<=in)
  {
    printf("%i\n",o);
    o+=2;
  }
  
}