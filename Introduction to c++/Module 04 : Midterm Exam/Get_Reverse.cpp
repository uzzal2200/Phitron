#include<bits/stdc++.h>
using namespace std;
struct Student


{
    string nm;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};
int main()
{
    int N;
    cin>>N;
    Student s[N];
    for(int i=0;i<N;i++)
    {
     cin>>s[i].nm>>s[i].cls>>s[i].section>>s[i].math_marks>>s[i].eng_marks;       
    }   
    for(int i=N-1;i>=0;i--)
    {
     cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].math_marks<<" "<<s[i].eng_marks<<endl;
    }
    return 0;
}

