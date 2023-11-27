#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
     stringstream ss(s);
    string word;
   bool Ratul=false;
   while (ss >> word)
   {
    if(word == "Ratul")
    {
        Ratul=true;
        break;
    }
   }
   
    if(Ratul)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
