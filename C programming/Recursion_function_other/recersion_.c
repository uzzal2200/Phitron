//  Recursion is a type of function that call itself to do a certain task or work
#include<stdio.h>
void fun()
{
printf("hello\n");
fun();
}
int main()
{
     fun();
    return 0;
}