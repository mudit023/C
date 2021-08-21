// swaping two numbers.
// Using CALL BY VALUE

#include<stdio.h>
void swp(int a, int b);
int main()
{
  int x,y;
  printf("Enter your number1: ");
  scanf("%i",&x);
  printf("Enter your number2: ");
  scanf("%i",&y);
  swp(x,y);
  printf("Numbers after swaping in the main function: %i,%i",x,y);

}
void swp(int a, int b)
{
  printf("Number 1 is: %i\n",b);
  printf("Number 2 is: %i\n",a);
  
}