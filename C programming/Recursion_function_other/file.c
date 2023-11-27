// #include <stdio.h>
// #include <stdlib.h>
 
// int main()
// {
//     // file pointer
//     FILE* fptr;
 
//     // creating file using fopen() access mode "w"
//     fptr = fopen("file.txt", "w");
 
//     // checking if the file is created
//     if (fptr == NULL) {
//         printf("The file is not opened. The program will "
//                "exit now");
//         exit(0);
//     }
//     else {
//         printf("The file is created Successfully.");
//     }
   
//     return 0;
// }

#include<stdio.h>
void fun(int i)
{
    if(i>=10) return;
    printf("%d ",i);
    fun(i+1);

}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);

    return 0;
}