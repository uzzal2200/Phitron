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
    int s;
    scanf("%d",&s);
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i] == s)
        {
            ans=i;
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}