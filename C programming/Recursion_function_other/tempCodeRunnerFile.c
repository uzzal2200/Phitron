#include<stdio.h>
int main()
{
    int a=10;
    int *g=&a;
   // g=&a;
    *g=20;
    printf(" Generally value of a: %d\n",a);
    printf(" address of a : %p\n",&a); 
    printf(" value  of a : %d \n",*g);
    printf("adrees of g : %p\n",g);
    printf(" adrees  of *g : %p\n",*g);
    return 0;
}