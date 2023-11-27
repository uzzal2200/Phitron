#include<stdio.h>
int main()
{
       int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],t[row][col];
    //
    //int element=row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);

        }
    } 
    printf("Given matrix\n");
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // exchanging rows and colums
    int temp=row;
    row=col;
    col=temp;
    // transpose Matrix
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        t[i][j]=a[j][i];
        }
    }
    printf("Transpose matrix\n");
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}