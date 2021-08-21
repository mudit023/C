#include<stdio.h>
int main()
{
  int a=7;
  char b='z';
  void*p;
  p=&a;
  printf("The integer value stored in pointer is %i",*(int*)p);
}