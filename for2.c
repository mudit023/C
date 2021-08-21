// printinng the fibonaccai series:
#include<stdio.h>
int main()
{
  int f=0,s=1,t;
  int n;
  printf("enter the lenght of the series: ");
  scanf("%i",&n);
  for (int i = 0; i < n; i++)
  {
    printf("%i\t",f);
    t=f+s;
    f=s;
    s=t;
  }
  
}