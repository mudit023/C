#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n, i=0;
  printf("Enter the size of the array: ");
  scanf("%i", &n);

  int array[n];
  printf("Enter the elements of the aaray: \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &array[i]);
  }
  printf("Your array is: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%i", array[i]);
    printf("\n");
  }
  printf("Enter the number you want to search in the array: ");
  int x;
  scanf("%i", &x);

  int a;
  for (int i = 0; i < n; i++)
  {
    if (array[i] == x)
    {
      printf("Position of the number %i is: %i \n", x, (i + 1));
      printf("Index of the number %i is: %i \n", x, (i));
     
      a=i;
    }
  }
  if (a==(n-1))
  {
    printf("Number is not present in the array!");
  }
  
}