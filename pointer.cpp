#include <iostream>
#include <string>
using namespace std;
class Username{
    public:
    char name[20];
    int id;
    int age;
};

int main()
{
    class Username u1={"Vansh",111,35};
    Username *ptr;
    ptr=&u1;
    cout<<"User Name: "<<ptr->name<<endl;
    cout<<"User ID: "<<ptr->id<<endl;
    cout<<"User Age: "<<ptr->age<<endl;

    return 0;
}