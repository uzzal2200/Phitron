// NO retrun + NO parameter
#include<stdio.h>
void fun()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int r=a-b;
    printf("%d",r);
}
int main()
{
     fun();
    return 0;
}