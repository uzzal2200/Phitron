#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a;
    int y=b;
    int z=c;
    
    int temp;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    } 
     if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
        
    }
   printf("%d\n%d\n%d\n",a,b,c);
   printf("\n%d\n%d\n%d",x,y,z);
  return 0;
 }
// #include <stdio.h>

// int main() {
//     int A, B, C;

//     // Input three numbers
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &A, &B, &C);

//     // Sort the numbers in ascending order
//     int temp;
//     if (A > B) {
//         temp = A;
//         A = B;
//         B = temp;
//     }
//     if (B > C) {
//         temp = B;
//         B = C;
//         C = temp;
//     }
//     if (A > B) {
//         temp = A;
//         A = B;
//         B = temp;
//     }

//     // Print the numbers in ascending order
//     printf("Numbers in ascending order: %d %d %d\n", A, B, C);

//     // Print the numbers in the sequence as they were read
//     printf("Numbers in the sequence as they were read: %d %d %d\n", A, B, C);

//     return 0;
// }