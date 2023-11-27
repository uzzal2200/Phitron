#include<stdio.h>
int main()
{
    int x=100;
    int *ptr = &x;
    x=200; //*ptr=200; dileo same print korbo
    printf("x er valur %d\n",x);    
    printf("x er valur %d\n",*ptr);    

   // printf("x er adress - %p\n",&x); 
    //printf("ptr er value - %p\n",ptr); 
   // printf("ptr er adress - %p\n",&ptr); 
   // printf("ptr er memory size - %d\n",sizeof(ptr)); 
    return 0;
}