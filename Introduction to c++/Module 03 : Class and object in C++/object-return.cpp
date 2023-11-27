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
Student fun()
{
    char name[100]="Rahim uddin";
    Student r(25,9,'A',name);
    return r;

}

int main()
{
    Student rahim=fun();
    cout<<rahim.roll<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.name<<endl;
    return 0;
}
