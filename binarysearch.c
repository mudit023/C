// binary search
#include<stdio.h>
int main()
{
int array[100],i,n,x,first,last,mid,flag=0;
printf("enter the number of elements");
scanf("%d",&n);//n=4
for(int i=0;i<=n-1;i++)
{
scanf("%d",&array[i]);
}
printf("enter the value to be search");
scanf("%d",&x);//x=6
/*binary search*/
first=0, last=n-1;
while(first<=last)
{
mid=(first+last)/2;
if(x==array[mid])
{
flag=1;
break;
}
else if(x<array[mid])
{
last=mid-1;
}
else
{
first=mid+1;
}
}

if(flag==0)
{
printf("element not found");
}
else
{
printf("%d value is found at %d",x,mid+1);
}
}

