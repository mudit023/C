#include<stdio.h>

int main()
{
    int a[4][4];
    int i,j,x,y,swap;


    printf("Enter 16 integers:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
          scanf("%d", &a[i][j]);
        }
    }
for(x=0;x<4;x++)
{
    for(y=0;y<4;y++)
    {
     for(i=0;i<4;i++)
      {
        for(j=0;j<4;j++)
         {
           if(a[x][y]>a[i][j])
            {
             swap=a[x][y];
             a[x][y]= a[i][j];
             a[i][j]=swap;
            }
          }
      }
    }
}
printf("Sorting in Descending order:\n");
    for( i = 0 ; i < 4; i++)
    {
      for( j = 0 ; j < 4; j++)
      {
        printf(" %d ", a[i][j]);
      }
      printf("\n");
    }

}