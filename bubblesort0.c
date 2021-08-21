// bubble sort
#include<stdio.h>
int main()
{
int a[100],n,i,j,swap;
printf("enter the number of elements:");
scanf("%d",&n);//n=4
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//[0]->8 [1]>2 [2]->0 [3]->9
for(i=0;i<n-1;i++)//total->3
{
for(j=0;j<n-i-1;j++)// i=0 j->iteration1: 2:3
{
if(a[j]>a[j+1])
{
swap=a[j];
a[j]=a[j+1];
a[j+1]=swap;
}
}
}
printf("sorted elements:\n");
for(i=0;i<=n-1;i++)
printf("%d",a[i]);
}