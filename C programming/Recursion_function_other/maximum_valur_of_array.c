// find maximum value from array
#include<stdio.h>
int maximum(int a[],int n)
{
    int max;
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    maximum(a,n);
    int result=maximum(a,n);
    printf("%d",result);
    return 0;
}