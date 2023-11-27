// return type + no parameter 
#include<stdio.h>
int add()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int result;
    result=a+b;
    return result;

}
int main()
{
     add();
     printf("%d",add());
    return 0;
}