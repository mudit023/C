// dynamic memory allocation using malloc() function

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
int *p=&n;
printf("enter number of elements");
scanf("%d",&n);//n=5
p=(int*)malloc(n*sizeof(int));//20bytes//dynamic allocation
if(p==NULL)
{
printf("memory insufficient");
}
else
{
printf("memory allocated");
printf("enter the elements one by one:\n");
for(int i=0;i<=n-1;i++)
{
scanf("%d",(p+i));
}
printf("the elements are:");
for(int i=0;i<=n-1;i++)
{
printf("%d\t ",*(p+i));
}
}
}