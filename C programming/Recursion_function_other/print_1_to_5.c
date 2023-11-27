// 1 to 5 print using recersion
#include<stdio.h>
void print(int i)
{
    if(i==6) return;
    printf("%d\n",i);
    print(i+1);  
}
int main()
{
     print(1);
    return 0;
}