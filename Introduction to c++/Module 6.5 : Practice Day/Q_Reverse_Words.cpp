#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  
  getline(cin,s);
  stringstream ss(s);
  string word;
  int ctn=0;
  ss>>word;
  reverse(word.begin(),word.end());
  cout<<word;
  while(ss>>word)
  
  {
   reverse(word.begin(),word.end());
   cout<<" "<<word;
  }
  


    return 0;
}
