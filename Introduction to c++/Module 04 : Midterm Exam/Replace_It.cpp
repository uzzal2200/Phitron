#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s,x;
        cin>>s>>x;
        while(s.find(x) != string::npos)
        {
            s.replace(s.find(x),x.length(),"$");
        }
        cout<<s<<endl;
        cin.ignore();
    }   
    return 0;
}





     
