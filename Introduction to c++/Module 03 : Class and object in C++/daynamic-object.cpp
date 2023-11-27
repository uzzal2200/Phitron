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
    char name[100]="rahim uddin";
    Student* rahim=new Student(26,11,'B',name);
    // int* a=new int;
    // *a=55;
    // cout<<*a<<endl;
    (*rahim).roll=78;
    //shortcut way
    //arrow sign
    //(*rahim).= rahim->  
      cout<<rahim->roll<<endl;
      cout<<rahim->cls<<endl;
      cout<<rahim->section<<endl;
      cout<<rahim->name<<endl;
      //delete object
      delete rahim;
         cout<<rahim->roll<<endl;
      cout<<rahim->cls<<endl;
      cout<<rahim->section<<endl;
      cout<<rahim->name<<endl;

      
    return 0;
}
