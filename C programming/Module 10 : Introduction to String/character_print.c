#include<stdio.h>
#include<string.h>
int main()
{
  char s1[20],s2[20],s3[20];
  scanf("%s%s",s1,s2);
  strcpy(s3,s1);
  int x=strlen(s1);
  int y=strlen(s2);
  int z=strlen(s3);
  printf("%d\n%d\n%d\n",x,y,z);
}