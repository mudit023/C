// printing 90degree angle triangle
#include<stdio.h>
int main()
{
  int x=1;
  for (int i = 1; i<=4; i++)
  {
    for (int j = 1; j<=i; j++)
    {
     printf("%i ",x++);
    
    }
    printf("\n");
  }
  
}