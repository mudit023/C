#include<stdio.h>
int abc(int x);
int main()
{
	int result;
   result=abc(9);
	printf("%d",result);		
	return 0;
}
int abc(int x)
{
	if(x%5==0)
	{
		return 1;
	}
	else
	{
		return x*abc(x-2);
	}
}
