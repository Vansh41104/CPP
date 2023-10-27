#include <iostream>
#include <string>
using namespace std;

class userinfo{
    char username[20];
    int userid;
    float salary;
    public:void read(){
        cout<<"Enter Name"<<endl;cin>>username;
        cout<<"Enter UserID"<<endl;cin>>userid;
        cout<<"Enter salary"<<endl;cin>>salary;
    }
    friend void display(userinfo);

};
void display(userinfo ui){
    cout<<"details of user & salary "<<endl<<ui.userid<<endl<<ui.salary;
}

int main()
{
    userinfo obj;
    obj.read();
    display(obj);
    return 0;
}