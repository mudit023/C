// call by refrence in arrrays
#include<stdio.h>
void display(int age[]);
int main()
{
  int array[4]={1,2,3,4};
  display(array); // here if we just write array in place of array[], it means the same as &array[0] i.e. calling by refrence.

}
void display(int age[]) // we are usinf call by refrence but we are not using &array[0], so we need not to use the pointers here.
{
  for (int i = 0; i < 5; i++)
  {
    printf("%i",age[i]);
  }
  
}