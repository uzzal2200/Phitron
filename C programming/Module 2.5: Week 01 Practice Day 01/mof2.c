#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,sum1=0;
    for(int i=1;i<=a;i++)
    {
     if(i%2==0)
     {
        sum=sum+i;
        
        
     }
     else 
     {
        sum1=sum1+i;
     }
     

    } 
    
    printf("%d\n",sum);
    printf("%d",sum1);
    return 0;
}