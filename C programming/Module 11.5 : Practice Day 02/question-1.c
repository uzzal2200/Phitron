#include<stdio.h>
#include<string.h>
int main()
{
    char x[21],y[21];
    scanf("%s %s",x,y);
    int v=strcmp(x,y);
    if(v<0)
    {
        printf("%s\n",x);

    }
    else 
    {
        printf("%s\n",y);
    }

    return 0;
}