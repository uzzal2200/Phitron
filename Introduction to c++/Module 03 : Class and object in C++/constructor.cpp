#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r,int c,char s,char* n)
    {
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);
    }

    
};
int main()
{
    Student rohim(34,7,'A',"rohim ali mia");
    Student karim(38,9,'A',"rohim ali mia");
    cout<<karim.roll<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.section<<endl;
    cout<<karim.name<<endl;
    return 0;
}
