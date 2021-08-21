//  accessing array using different notations
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number: \n");
  scanf("%i",&n);
  int *p=&n;
  for (int i = 1; i <=10; i++)
  {
    printf("Multiplication table: %i\n",*p*i);
  }
}