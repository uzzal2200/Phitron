#include<stdio.h>
int main()
{
    char name[20];
    FILE* file;
    file=fopen("text.txt","w");
    if(file == NULL)
    {
        printf("file does not open\n");
    } 
    else
    {
        printf("file is opened");
        printf("Enter your full name: \n");
        gets(name);
        fputs(name,file);
        printf("file is wirtten successfully\n");
        fclose(file);
    }
    return 0;
}