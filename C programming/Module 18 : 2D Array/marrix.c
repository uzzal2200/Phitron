#include<stdio.h>
int main()
{
    // int row,col;
    // scanf("%d%d",&row,&col);
    // int a[row][col];
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         scanf("%d",&a[i][j]);
    //     }
    // } 
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // } 
    int row=5,col=5;
    int p[row][col];
       printf("MULTIPICATION TABLE\n\n");
    printf(" ");
    for(int j=1;j<=col;j++)
    {

        printf("%4d",j);
    }
    printf("\n");
    printf("-----------------\n");
    for(int i=1;i<=row;i++)
    {

        row=i+1;
        printf("%2d |",row);
        for(int j=1;j<=col;j++)
        {

            col=j;
            p[i][j]=row*col;
            printf("%4d",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}