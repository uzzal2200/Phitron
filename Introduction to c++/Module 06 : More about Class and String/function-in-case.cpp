#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;

    person(string n,int a,int m1,int m2)
    {
        name=n;
        age=a;
        marks1=m1;
        marks2=m2;
    }
    void hello()
    {
       // cout<<"uzzal is the best choose of your life";
       cout<<name<<endl;
      cout<<age;
    }
    int total_marks()
    {
        return marks1+marks2;
    }

};
int main()
{
    person rakib("uzzal",20,70,80);
   // rakib.hello();
    cout<<rakib.total_marks()<<endl;
    
    return 0;
}
