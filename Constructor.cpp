#include <iostream>
#include <string>
using namespace std;
class democonst{
    private:
    int n1,n2,n3;
    public:
    int i;
    democonst(void);//declartion of constructor
    void display(){
        cout<<"Number1 is ="<<n1<<endl<<"Number 2 ="<<n2<<endl<<"Number 3 ="<<n3<<endl;
    }
};
    democonst::democonst(void){
        cout<<"n here calling to constructor"<<endl;
        i=4,n1=10,n2=20,n3=30;
} 
int main()
{
    democonst i;
    i.display();
    return 0;
}
