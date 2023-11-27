#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;

};
int main()
{
    Student karim;
    karim.cls=8;
    karim.roll=5;
    karim.section='B';
    char mn1[100]="karim mia";
    strcpy(karim.name,mn1);
    cout<<karim.name;
    cout<<karim.roll;
    cout<<karim.cls;
    cout<<karim.section;

    return 0;
}
