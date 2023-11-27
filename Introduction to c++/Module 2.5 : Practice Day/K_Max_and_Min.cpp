#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int i,j;
     i=min(a,b);
    int mn=min(i,c);
     j=max(a,b);
    int mx=max(j,c);
    cout<<mn<<" "<<mx;
    return 0;
}
