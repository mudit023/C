// creating a function to print the square of the given number.
#include<stdio.h>
int sqr(int a);
int main()
{
  printf("Enter the nuber: ");
  int a;
  scanf("%i",&a);
  int result=sqr(a);
  printf("%i",result);

}
int sqr(int a)
{
  int c = a*a;
  return c;
}