#include<stdio.h>
void fun(int ar[],int n) // *ar aibabe o array receive kora jai
{
    for(int i=0;i<n;i++)
    printf("%d ",ar[i]);
}
int main()
{
    int ar[5]={10,20,30,40,50};
    // int sz=sizeof(ar)/sizeof(int);
    // printf("%d",sz); 
fun(ar,5);// arry size holo 5
    return 0;
}
