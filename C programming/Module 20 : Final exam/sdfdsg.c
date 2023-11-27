// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     int a,s;
//     for(int i=0;i<t;i++)
//     { 
        
//         scanf("%d%d",&a,&s);
         
//     } 
//     int tigerwins=0,pathanwins=0;
//     for(int i=0;i<t;i++)
//     {
//         if(a>s)
//     {
//         tigerwins++;
//     }
//     else if(s>a)
//     {
//      pathanwins++;
//     }
//     }
    
//     if(tigerwins>pathanwins)
// {
//     printf("Tiger\n");
// }
// else if(pathanwins == tigerwins)
// {
// printf("Draw\n");
// }
// else if(pathanwins>tigerwins)
// {
// printf("Pathan\n");
// }

//     return 0;
// }
 #include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++)
    { 
        int a,s;
        scanf("%d%d",&a,&s);
         printf("%d %d\n",a,s);
    } 
  
}
    