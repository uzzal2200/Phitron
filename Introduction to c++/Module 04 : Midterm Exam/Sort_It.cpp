#include<bits/stdc++.h>
using namespace std;
struct Student
{
    string nm;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};
bool compareStudents(const Student& s1,const Student& s2)
{
    if(s1.total_marks == s2.total_marks)
    {
        return s1.id<s2.id;
    }
    return s1.total_marks>s2.total_marks;
}
int main()
{
    int n;
    cin>>n;
    
   vector<Student> s(n);
    for(int i=0;i<n;i++)
    {
    cin>>s[i].nm>>s[i].cls>>s[i].section>>s[i].id>>s[i].math_marks>>s[i].eng_marks;
     s[i].total_marks=s[i].math_marks+s[i].eng_marks;
    }
    sort(s.begin(),s.end(),compareStudents);
   
    for(const Student& st : s )
    {
        cout<<st.nm<<" "<<st.cls<<" "<<st.section<<" "<<st.id<<" "<<st.math_marks<<" "<<st.eng_marks<<endl;
    }
    
    return 0;
}

