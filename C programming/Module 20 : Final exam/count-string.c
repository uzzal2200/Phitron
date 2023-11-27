#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[1000];
  
    gets(a);
    int i=0,capital=0,small=0,space=0;
   while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
         capital++;
        
        
        else if(a[i]>=97 && a[i]<=122)
          small++;
        
        else if(a[i]=' ')
        space++;
        
        i++;
    }
    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d\n",space);

    return 0;
}
