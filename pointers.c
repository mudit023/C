#include<stdio.h>
int main()
{
  int a=14;
  printf("%i \n",a);
  int *p;
  p=NULL;
  printf("null pointer hold null memory location %p\n",p);
  p=&a;
  printf("Address of a is: %p",p);
}