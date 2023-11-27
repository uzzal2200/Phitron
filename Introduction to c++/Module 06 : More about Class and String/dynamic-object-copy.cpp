#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main()
{
    person* rakib=new person("raikib",23);
    person* shakib=new person(" shakib",34);
    *rakib=*shakib;
    delete shakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}
