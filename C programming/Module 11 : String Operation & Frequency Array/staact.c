#include<stdio.h>
#include<string.h>
int main()
{
    char s[464],m[44],c[34]; 
    scanf("%s%s%s",s,m,c);
    int len=strlen(s);
    for(int i=0;i<=strlen(m);i++)
    {
    s[len]=m[i];
    len++;
    
    }
    int k=strlen(s);
    for(int i=0;i<=strlen(c);i++)
    {
        s[k]=c[i];
        k++;
    }
    printf("%s",s);
    return 0;
}