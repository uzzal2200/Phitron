 #include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    if( n>0)
    {
        printf("positive");
    }
    else if (n<0)
    {
        printf("negative");
    }
    else
    {
        printf("zer0");
    }
    return 0;
 }