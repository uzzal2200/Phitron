#include<stdio.h>
int main()
{
       int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],t[row][col],mul[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);

        }
    } 

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          mul[i][j]=a[i][j]*t[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}