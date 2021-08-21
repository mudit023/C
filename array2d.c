#include<stdio.h>
int main()
{
int a[3][3];
printf("enter 9 elements");
for(int i=0;i<=2;i++)//row i=0,1
{
for (int j=0;j<=2;j++)//col j=0,1,2
{
scanf("%d",&a[i][j]);//[0][0] [0][1] [0][2] [1][0] [1][1] [1][2] [2][0]
}
}
printf("the resultant array is\n");
for(int i=0;i<=2;i++)//row i=0,1
{
for (int j=0;j<=2;j++)//col j=0,1,2
{
printf("\t %d",a[i][j]);//[0][1] [0][1] [0][2] [1][0] [1][1] [1][2] [2][0]
}
printf("\n");
}
}