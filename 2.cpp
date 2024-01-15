#include <iostream>
using namespace std;
class addition{
    public:
    int a;
    int b;
    int get_values(){
        cin>>a;
        cin>>b;
    }
    int print_values(){
        cout<<"Values of A is "<<a<<endl;
        cout<<"Values of B is "<<b<<endl;
    }
    int sum(){
        cout<<"the sum of A and B is "<<a+b<<endl;
    }
};

int main()
{
    addition a1;
    a1.get_values();
    a1.print_values();
    a1.sum();
    return 0;
}