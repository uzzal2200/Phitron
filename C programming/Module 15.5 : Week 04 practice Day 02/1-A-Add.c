// #include<stdio.h>
// int sum(int x,int y)
// {
//    int sum=x+y;
//    return sum;
// }
// int main()
// {
//      printf("%d\n",sum(5, 2));
//     return 0;
// }
#include<stdio.h>
int sum()
{  
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main()
{   
     int s=sum();
     
     printf("%d\n",s);
    return 0;
}