//  Inversion of number
// using call-by-reference

#include<stdio.h>
void swp(int*a,int*b);
int main()
{
  int x,y;
  printf("Enter your number a: ");
  scanf("%i",&x);
  printf("Enter your number b: ");
  scanf("%i",&y);
  printf("Before swaping in main function: a=%i b=%i\n",x,y);
  swp(&x,&y);
  printf("after swaping in the main function: a=%i b=%i\n",y,x);

}
  void swp(int*a,int*b)
  {
    printf("After swaping in swp udf a=%i b=%i\n",*b,*a);  
  }
  