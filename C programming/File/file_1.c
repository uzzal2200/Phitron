#include<stdio.h>
#include<string.h>
int main()
{
    FILE* file;
    char s[33]="Uzzal";
    int len=strlen(s);
    file=fopen("test.txt","w");
    if(file == NULL)
    {
        printf("File does not exist\n");
    } 
    else
    {
        printf("file is opend\n");
        for(int i=0;i<len;i++)
        {
            fputc(s[i],file);
           
        }
        printf("File is written successful");
         fclose(file);
    }
    return 0;
} 
