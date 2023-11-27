#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    } 
    int sum=0;
  for(int i=0;i<n;i++)
  {
   sum=sum+a[i];
   
  }
  printf("\nsum of array:%d\n",sum);
    return 0;
}
