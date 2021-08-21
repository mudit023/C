#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n;
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
  bool found = false;
  int a;

  for (int i = 0; i < n; i++)
  {
    if (array[i] == x)
    {
      found = true;
      a = i;
      break;
    }
  }
  if (found)
  {
    printf("Position of the number %i is: %i \n", x, (a + 1));
    printf("Index of the number %i is: %i \n", x, (a));
  }
  else
  {
    printf("Number not found in the array!");
  }
}