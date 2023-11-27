#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="arif";
    string b="h";
    //a=a+b;
    //a+=b;
    // a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;
     //a="arifh"; works it
    //  a=a+b; works it
    
    //a[5]='h'; din't work
    a.push_back('h');
    a.pop_back();
    a.pop_back();
    cout<<a<<endl;
    return 0;
}
