#include <iostream>
#include <string>
using namespace std;

class number{
    public:
    int num;
};

int main()
{   
    number obj;
    cout<<"enter the number\n";
    cin>>obj.num;
    if(obj.num%2){
        cout<<"odd no\n";
    }
    else{
        cout<<"even no\n";
    }
    return 0;
}