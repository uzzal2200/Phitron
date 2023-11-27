#include<bits/stdc++.h>
using namespace std;
struct Student

{
    string nm;
    int cls;
    char section;
    int id;
};
int main()
{
     int n;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
     cin>>s[i].nm>>s[i].cls>>s[i].section>>s[i].id;       
    }  
    for(int i=0;i<n/2;i++)
    {
        swap(s[i].id,s[n-i-1].id);
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].id<<endl;
    }
    
    return 0;
}
