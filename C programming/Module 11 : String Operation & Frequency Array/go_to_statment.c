#include<stdio.h>
int main()
{
    int i=1;
    start:
    if(i<=10)
    {
        printf("%d ",i);
         i++;
    goto start;
    } 
   

    return 0;
}