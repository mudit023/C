#include<stdio.h>

int main()
{
  int x;
 printf("Enter the day number: ");
 scanf("%i",&x);
 switch (x)
 {
 case 0:
   printf("Sunday");
   break;
 case 1:
   printf("Monday");
   break;
  case 2:
   printf("Tuesday");
   break;
  case 3:
   printf("Wednesday");
   break;
  case 4:
   printf("Thursday");
   break;
  case 5:
   printf("Friday");
   break;
  case 6:
   printf("Saturday");
  break;
 default:
 printf("Input valid number between 0-6");
   break;
 }
  return 0;
}