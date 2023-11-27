#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[123]={};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char s;
        cin>>s;
        a[s]++;
    }
    for(int i=0;i<123;i++)
    {
        if(a[i]!=0)
        while(a[i]--)
        cout<<(char)(i);
    }
    return 0;
}
