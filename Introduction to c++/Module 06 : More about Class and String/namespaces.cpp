#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=23;
    void hello()
    {
        cout<<"rakib namespace"<<endl;
    }
}
namespace sakib
{
    int age2=24;
    void hello2()
    {
        cout<<"sakib namespace"<<endl;
    }
}
using namespace rakib;
using namespace sakib;
int main()
{
    cout<<age<<endl;
    cout<<age2<<endl;
    hello();
    hello2();
    return 0;
}
