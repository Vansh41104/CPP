#include <iostream>
using namespace std;
template<class T>T add (T&v1,T&v2){
    T result=v1+v1;
    return result;
}
int main()
{
    int i=10;
    int j=20;
    float m=20.39;
    float n=90.29;
    cout<<"Addit of I and J is : "<<add(i,j);
    cout<<endl;
    cout<<"Addit of M and N is : "<<add(m,n);
    return 0;
}
