// call by value in arrrays

#include<stdio.h>
void display(int age);
int main()
{
  int array[4]={1,2,3,4};
  for (int i = 0; i < 4; i++) /* as call by value printcthe element of array one by one.
  if we want to print the whole array we need to use for loop */
  {
    display(array[i]); //here we are calling by value that is why we are using array[i]
  }
}
void display(int age) 
{
    printf("%i",age);
  
}