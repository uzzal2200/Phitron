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
    person rakib("MD Uzzal Mia",20);
    cout<<rakib.name<<" "<<rakib.age<<endl;
    return 0;
}
