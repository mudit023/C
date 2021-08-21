#include<stdio.h>
int main()
{
  int n, array[10];
   int sum=0;
  printf("Enter the number of subjects: ");
  scanf("%i", &n);
  printf("Enter Your %i numbers:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &array[i]);
    sum= sum + array[i];
  }
   printf("sum of marks: %i \n",sum);
 
   
}