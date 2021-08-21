// print the multiplication table of the number entered by the user:
 #include<stdio.h>
 int main()
 {
   int n;
   printf("Enter the integer number of which you want the table: ");
   scanf("%i",&n);
   for (int i = 1; i <=10; i++)
   {
     printf("%i * %i is: %i\n",n,i,n*i);
   }
   
 }