#include<stdio.h>
int main()
{
    double s=5.26; //double intger 8byte jaiga dokhol kore 
    double *ptr =&s;//4byter akta jaiga toiri hoice
    double *ptr2=ptr;
    //*ptr=10.20;
    *ptr2=100.50;
    printf("s er value %0.2lf\n",s);
    printf("s er value %0.2lf\n",*ptr);
    printf("s er value %0.2lf\n",*ptr2);
   // printf("ptr er size %d\n",sizeof(ptr) );
 
    return 0;
}