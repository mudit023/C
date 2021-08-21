// Factorial of a number
#include<stdio.h>
int fec(int a);
int main()
{
  int n,result;
  printf("Enter the number: ");
  scanf("%i",&n);
  result=fec(n);
  printf("%i",result);
}
int fec(int a)
{
  if (a==0||a==1)
  return 1;
  else
  {
    return (a*fec(a-1));
  }
  
}
