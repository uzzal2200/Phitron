#include<stdio.h>
#include<math.h>
void standard_deviation(float a[],int n)
{
    float sum1=0.0,sum2=0.0,am,sd;
    for (int i=0;i<n;i++)
{
sum1=sum1+a[i];
}
am=(sum1/n);
for(int i=0;i<n;i++)
{
    sum2=sum2+pow((a[i]-am),2);
}
sd=pow((sum2/n),0.5);
printf("%f",sd);
}
int main()
{
    int  n;
    scanf("%d",&n);
    float a[n];
    // float sum1=0.0,sum2=0.0,am,sd;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        // sum1=sum1+a[i];
    }
    standard_deviation(a,n);

    return 0;
}