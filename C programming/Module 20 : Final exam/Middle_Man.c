#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
             int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
     int midle1=a[(n-1)/2];
     int midle2=a[n/2-1];
     int midle3=a[(n/2)];
     if(n%2 == 0)
     {
        printf("%d %d",midle2,midle3);
     }
     else
     {
        printf("%d\n",midle1);
     }
    return 0;
}
