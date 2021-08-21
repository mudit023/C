// creating a user defined function UDF

#include<stdio.h>
int add(int a, int b); //function declarition
int main()
{
  int result;
  result=add(5,6); //calling the function
  printf("%i",result);

}
int add(int a, int b) //function definition 
{
  int c;
  c=a+b;
  return c;
}