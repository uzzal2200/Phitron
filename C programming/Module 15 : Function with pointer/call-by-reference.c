#include<stdio.h>
void fun(int *p)
{
//printf(" p er value %p",p);
//printf(" main x  er value %d",*p);
*p=500;//deference kora hoice 
}
int main()
{
    int x=100;

   // printf("x er adress- %p\n",&x);
    fun(&x);
    printf("%d",x);
    return 0;
}