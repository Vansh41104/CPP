#include <iostream>
#include <string>
using namespace std;

class copyconst{
    private:
    int v1,v2,v3;
    public:
    copyconst(int n1,int n2,int n3){
        v1=n1;
        v2=n2;
        v3=n3;
        cout<<"demo for parameterized constructor"<<endl;
    }
    copyconst(copyconst &obj){
        v1=obj.v1;
        v2=obj.v2;
        v3=obj.v3;
    }
    void display(){
        cout<<"variable 1 "<<v1<<endl;
        cout<<"variable 2 "<<v2<<endl;
        cout<<"variable 3 "<<v3<<endl;
    }
};

int main()
{
    copyconst C1(100,200,300);
    copyconst C2(C1);
    cout<<"here Parameterized constructor"<<endl;
    C1.display();
    cout<<"here call copy constructor"<<endl;
    C2.display();
    return 0;
}