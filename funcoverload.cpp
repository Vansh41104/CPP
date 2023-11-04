#include <iostream>
#include <string>
using namespace std;
class yolo{
    public:
    int add(int a,int b){
        return a+b;}
    int add(int a,int b,int c){
        return a+b+c;}
    int add(int a,int b,int c,int d){
        return a+b+c+d;}
};

int main()
{
    yolo obj;
    cout<<obj.add(1,2)<<endl;   
    cout<<obj.add(1,2,3)<<endl;   
    cout<<obj.add(1,2,3,4)<<endl;   
    return 0;
}