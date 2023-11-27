#include<stdio.h>
void fun(int u)
{
u=100;
}
int main()
{
    int x=10;
    int *p=&x;
    int 
   // printf("main x er adress %p\n",&x);
    fun(x);
    printf("main er x er value %d\n",x); 
    return 0;
}