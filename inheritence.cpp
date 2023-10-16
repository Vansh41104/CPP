#include <iostream>
#include <string>
using namespace std;
class demo1{
    public:
    void display(){
        cout<<"here the first inheritence demo of the program"<<endl<<endl;
    }
};
class demo2:public demo1{
    public:
    void show(){
        cout<<"here derived class from demo1"<<endl;
    }
};
class demo3:public demo1{
    
};
int main()
{
    demo3 obj1;
    obj1.display();
    demo2 obj2;
    obj2.show();
    return 0;
}
