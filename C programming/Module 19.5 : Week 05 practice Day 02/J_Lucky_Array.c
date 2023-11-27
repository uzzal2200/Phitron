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
     int min=a[0],cnt=0;
     for(int i=0;i<n;i++)
     {
        if(min==a[i])
        {
            cnt++;

        }
        if(min>a[i])
        {
            min=a[i];
            cnt=1;
        
        }
        
     }
        if(cnt%2 == 0)
        {
         printf("Unlucky\n");
        }
        else
        {
            printf("Lucky\n");
        }

     
     
    return 0;
}