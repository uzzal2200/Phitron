#include<stdio.h>
int main()
{
     int ar[5]={10,20,30,40,50};
     printf(" 0th indexer adrees %p\n",&ar);//ar[1]=*(ar+1)=(1+ar)=1(ar)=ar(1)
     printf(" 0th indexer adrees %p\n",ar);
     printf(" 0th indxer value %d\n",ar[0]);
     printf(" 1st indxer value %d\n",ar[1]);
     printf(" 0th indxer value %d\n",*ar);
     printf(" 0th indxer value %d\n",*ar);
     printf(" 0th indxer value %d\n",ar[0]);
     printf(" 2 th infr vslut %d\n",*(ar+1));
     printf(" 2 th infr vslut %d\n",*(ar+2));
    return 0;
}