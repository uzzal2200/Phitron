#include<stdio.h>
void hello()
{
    printf("hello start\n");
    printf("Hello end\n");
}
void world()
{

    printf("World start\n");
    hello();
}
int main()
{
    printf("main start\n");//first  main function call print "mani start"
     world();
     printf("main end\n");
    return 0;
}
