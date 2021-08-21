// taking string as input from the user

#include<stdio.h>

int main()
{
  
  char name [0];  // specifying the value of date storage required in[].
  printf("What is your name: ");
  scanf("%s",name); 
  printf("Hi %s, nice to meet you", name);

  return 0;

}