#include <iostream>
using namespace std;
class demo_overload{
    public:
    int count;
    demo_overload():count(10){}
    void operator++(){
        ++count;
    }
    void show(){
        cout<<"counter variable : "<<count<<endl;
    }
};
int main()
{
    demo_overload obj;
    ++obj;
    obj.show();    
    return 0;
}
