#include<stdio.h>
int main()
{
  char in;
  printf("Press 'r' or 'R' for area of the rectangle:\n");
  printf("Press 's' or 'S' for area of the square:\n");
  printf("Press 'c' or 'C' for area of the circle:\n");
  
  scanf("%c",&in);
  switch (in)
  {
  case'r':
    printf("Enter the length and the breadth: ");
    double l,b;
    scanf("%lf %lf",&l,&b);
    printf("the area is: %.3lf",l*b);
    break;
  case'R':
    printf("Enter the length and the breadth: ");
    double L,B;
    scanf("%lf %lf",&L,&B);
    printf("the area is: %.3lf",L*B);
    break;
  case's':
    printf("Enter the length of a side: ");
    double side;
    scanf("%lf",&side);
    printf("the area is: %.3lf",side*side);
    break;
  case'S':
    printf("Enter the length of a side: ");
    double SIDE;
    scanf("%lf",&SIDE);
    printf("the area is: %.3lf",SIDE*SIDE);
    break;
  case'c':
    printf("Enter the radius: ");
    double radius;
    scanf("%lf",&radius);
    printf("the area is: %.3lf",3.14*radius*radius);
    break;
  case'C':
    printf("Enter the radius: ");
    double RADIUS;
    scanf("%lf",&RADIUS);
    printf("the area is: %.3lf",3.14*RADIUS*RADIUS);
    break;
  
  default:
  printf("chose a valid option");
    break;
  }
  return 0;
}