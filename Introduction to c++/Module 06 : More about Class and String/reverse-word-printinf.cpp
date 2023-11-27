#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    string word;
    if(ss >> word)
    {
        print(ss);
        cout<<word<<endl;
        //print(ss); not reverse print 
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    print(ss);
    return 0;
}
