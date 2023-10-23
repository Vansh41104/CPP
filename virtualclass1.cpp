#include <iostream>
#include <string>
using namespace std;
class A1{
    public:
    int x;
};
class B1:virtual public A1{
    public:
    int y;
};
class C1:virtual public A1{
    public:
    int z;
};
class D1:public C1,public B1{
    public:
    int x1;
};
int main()
{
    D1 obj;
    obj.x=100;
    obj.y=200;
    obj.z=300;
    obj.x1=400;
    cout<<"X  : "<<obj.x<<endl;
    cout<<"Y  : "<<obj.y<<endl;
    cout<<"Z  : "<<obj.z<<endl;
    cout<<"X1 : "<<obj.x1<<endl;
    return 0;
}