#include<stdio.h>
int main()
{
    int a=12;
    int *ptr=&a;
    int y=*ptr;
     printf("%d is sorted at adress %p\n\n",a,&a);
      printf("\n");
    printf("%d is sorted at adress %p\n",*&a,&a);
    printf("\n");
    printf("%d is sorted at adress %p\n\n",*ptr,ptr);
     printf("\n");
    printf("%d is sorted at adress %p\n\n",ptr,&ptr);
    printf("%d is sorted at adress %p\n\n",y,&y);
   
   
    

    return 0;
}