#include <iostream>
using namespace std;
class swapp{
    public: int a,b;
    public: int temp;
    int swap()
    {
        temp=a;
        a=b;
        b=temp;
    }
    int display(){
        cout<<"Swapped Numbers:"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }
    int sum(){
        cout<<a+b<<endl;
    }
    int sub(){
        cout<<a-b<<endl;
    }
    int mul(){
        cout<<a*b<<endl;
    }
    int div(){
        cout<<a/b<<endl;
    }
};

int main()
{
    swapp obj;
    cout<<"Insert Numbers:"<<endl;
    cin>>obj.a;
    cin>>obj.b;
    obj.swap();
    obj.display();
    cout<<"Operations Performed:"<<endl;
    obj.sum();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}
