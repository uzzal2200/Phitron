// return type + parameter
#include<stdio.h>
int noman(int n,int p)
{
int result;
result=n*p;
return result;
}
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
   noman(n,p);
   int u=noman(n,p);
    printf("%d",u);
     
    return 0;
}