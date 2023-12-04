#include <iostream>
using namespace std;
class a1{
    public:
    static int v1,v2,v3,v4;
    void read(){
        cout<<"insert values:"<<endl;
        cin>>v1>>v2>>v3>>v4;
    }
    void display(){
        cout<<"The values are"<<endl<<v1<<endl<<v2<<endl<<v3<<endl<<v4<<endl;
    }
    static int process(int v1,int v2){
        cout<<"the sum is: "<<endl<<v1+v2<<endl;
    }
};
class a2:a1{
    public:
    int process(int v1,float v2,double v3){
        cout<<"the sum is: "<<endl<<v1+v2+v3<<endl;
    }    
};
int a1::v1;
int a1::v2;
int a1::v3;
int a1::v4;

int main()
{
    a1 obj1;
    obj1.read();
    obj1.display();
    obj1.process(obj1.v1,obj1.v2);
    a2 obj2;
    obj2.process(obj1.v1,obj1.v2,obj1.v3);

    return 0;
}
