// to find LCM and HCF using udf

#include<stdio.h>
int hcf(int n1, int n2); //the function HCF is declared here
int main()
{
  int a,b,HCF,LCM;
  printf("Enter two numbers to find HCF and LCM: "); // take input from the user
  scanf("%i",&a);
  scanf("%i",&b);
  HCF = hcf(a,b); // function calling: this will transfer control to the hcf function
  printf("The HCF of %i and %i is: %i \n",a,b,HCF);
  if (a==0||b==0)
  {
    printf("LCM is not defined if one number is zero!");
  }
  else
  {
    LCM = (a*b)/HCF;
    printf("The LCM of %i and %i is: %i",a,b,LCM);
  }
}
int hcf(int n1, int n2) // I am using euclid's algorithm: In this the concept is hcf(a,b) = hcf(b,a%b)
{
  if(n2==0)
  return n1;
  else
  {
    return  hcf(n2, n1%n2);
  }
  
}
