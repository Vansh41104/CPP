#include <iostream>
using namespace std;
class student{
    public:
    string student_name;
    int roll_number;
    int get_name(){
        cin>>student_name;
        cin>>roll_number;
    }
    int print_name(){
        cout<<student_name<<endl;
        cout<<roll_number<<endl;
    }
};
class car{
    public:
    string car_name;
    int car_price;
    int get_car_name(){
        cin>>car_name;
        cin>>car_price;
    }int print_car_name(){
        cout<<car_name<<endl;
        cout<<car_price<<endl;
    }
};

int main()
{
    student s1;
    s1.get_name();
    s1.print_name();
    car c1;
    c1.get_car_name();
    c1.print_car_name();
    return 0;
}