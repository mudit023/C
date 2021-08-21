// sum of the given series of number
#include<stdio.h>
int main()
{
  int a,b,sum=0;
  printf("Enter the first number of the series: ");
  scanf("%i",&a);
  printf("Enter the last number of the series: ");
  scanf("%i",&b);
  while (a<=b)
  {
   sum=sum+a;
   a+=1; 
  }
  printf("sum of the given series is %i: ",sum);
  
}