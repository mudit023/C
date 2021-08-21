#include<stdio.h>
int main()
{
  char add[0]; // you can give any arbitaray number in [] it doesn't matter; zero is suitable.
  printf("What is your address: ");
  fgets(add, 30, stdin); // you have to define the amount of space required for string here.
  printf("So you live in %s", add);

  return 0;
}