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
   
  int n;
  printf("Enter the number you want in array: ");
  scanf("%i", &n);

  int pos;
  printf("Enter the position at which you want the number to be inserted: ");
  scanf("%i",&pos);

  x++;

  for (int i = x-1; i >= pos-1; i--)
  {
   array[i+1]=array[i];
  }

  array[pos-1]=n;

  printf("New Array: \n");
  for (int i = 0; i < x; i++)
  {
    printf("%i",array[i]);
    printf("\n");
  }
  
  
}