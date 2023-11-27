#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100]={0};
    gets(s1);
     for(int i=0;i<strlen(s1);i++)
     {
       if(s1[i]>='a' && s1[i]<='z')
       {
       s2[i]=(char)s1[i]-32;
       }
       else 
       {
        s2[i]=s1[i];
       }
     }
     printf("%s",s2);
    
    return 0;
}