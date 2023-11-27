#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    float height; 
    int age;
    
    Person(string n,float h,int a)
    {
     name=n;
     height=h;
     age=a;
    }


};
int main()
{
 
    Person* uzzal=new Person("uzzal",5.6,20);
   
         cout<<(*uzzal).name<<endl;
         cout<<(*uzzal).height<<endl;
         cout<<(*uzzal).age<<endl;
     

      
    return 0;
}