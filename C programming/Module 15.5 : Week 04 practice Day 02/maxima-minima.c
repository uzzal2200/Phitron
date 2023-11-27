#include<stdio.h>
void solve(int ar[],int n)
{
    int min,max;
    min=max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
        }
        if(ar[i]>max)
        {
            max=ar[i];
        }
        
    }
     printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    } 
    int max,min;
    solve(ar,n);
   
    return 0;
}
// #include <stdio.h>

// void solve(int arr[], int n) {
//     int i, min, max;

//     // Initialize min and max with the first element of the array
//     min = max = arr[0];

//     // Traverse the array to find the minimum and maximum
//     for (i = 1; i < n; i++) {
//         if (arr[i] < min)
//             min = arr[i];
//         if (arr[i] > max)
//             max = arr[i];
//     }

//     // Print the minimum and maximum
//   printf("%d %d",min,max);
// }

// int main() {
//     int arr[] = {5, 2, 8, 1, 9, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // Call the solve function
//     solve(arr, size);

//     return 0;
// }