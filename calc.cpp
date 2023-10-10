#include <iostream>
#include <string>
using namespace std;

class numbers{
    public:
    int a,b,ch;
};
int main()
{
    numbers obj;
    while(1){
    cout<<"select the operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Divison\n5. Exit\n";
    cin>>obj.ch;
    cout<<"Enter First number\n";
    cin>>obj.a;
    cout<<"Enter Second number\n";
    cin>>obj.b;
    switch(obj.ch){
        case 1:
        cout<<"the sum of "<<obj.a<<" & "<<obj.b<<" is "<<obj.a+obj.b;
        break;
        case 2:
        cout<<"the sum of "<<obj.a<<" & "<<obj.b<<" is "<<obj.a-obj.b;
        break;
        case 3:
        cout<<"the sum of "<<obj.a<<" & "<<obj.b<<" is "<<obj.a*obj.b;
        break;
        case 4:
        cout<<"the sum of "<<obj.a<<" & "<<obj.b<<" is "<<obj.a/obj.b;
        break;
        default:
        cout<<"Invalid argument";
        break;
        }
    return 0;
    }
}