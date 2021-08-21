#include<stdio.h>
int main()
{
  int array[10];
  int x;
  printf("Size of original array: ");
  scanf("%i",&x);

  printf("Enter the numbers: ");
  for (int i = 0; i < x; i++)
  {
   scanf("%i",&array[i]);
  }
   printf("Original array: \n");
   for (int i = 0; i < x; i++)
   {
     printf("%i",array[i]);
     printf("\n");
   }

  int pos;
  printf("Enter the position at which you want to be deleted: ");
  scanf("%i",&pos);

  for (int i = pos-1; i <=x-1; i++)
  {
   array[i]=array[i+1];
  }

  printf("New Array: \n");
  for (int i = 0; i < x-1; i++)
  {
    printf("%i",array[i]);
    printf("\n");
  }
  
  
}