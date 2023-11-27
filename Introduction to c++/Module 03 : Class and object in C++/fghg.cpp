#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name; 
    int age;
    

};
int main()
{
    
    Person uzzal;
    uzzal.name="uzzal";
    cin>>uzzal.age;
    Person rifat;
    rifat.name="rifat";
    cin>>rifat.age;
    if(uzzal.age>rifat.age)
    {
        cout<<uzzal.name<<endl;
    }
    else{
        cout<<rifat.name<<endl;
    }

      
    return 0;
}