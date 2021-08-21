#include<stdio.h>
int main()
{
  int n, array[10];
  printf("Enter the number: ");
  scanf("%i", &n);
  printf("Enter Your %i numbers:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &array[i]);
  }
  printf("Numbers in reverse order: \n");
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%i \n", array[i]);
  }
}