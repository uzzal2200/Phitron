// NO retrun + parameter
#include<stdio.h>
void fun(int a,int b)
{
    int result;
    result=a+b;
    printf("%d",result);
}
int main()
{
     int a,b;
     scanf("%d%d",&a,&b);
     fun(a,b);
    return 0;
}