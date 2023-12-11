//exception handling without using class


#include <iostream>
using namespace std;

int main()
{
    float N,D,R;
    cout<<"Enter Numerator : ";
    cin>>N;
    cout<<"Enter Denominator : ";
    cin>>D;
    try{
        if(D==0){
            throw 0;
        }
        R=N/D;
        cout<<"N is "<<N<<"/"<<"D is "<<D<<" = "<<R;
    }
    catch(int NDRexception){
        cout<<"Logical Error: Cant divide by 0 : "<<NDRexception;
    }
    return 0;
}

//exception handling with class


#include <iostream>
using namespace std;
class exception1{
    public:
    float n,d,r;
    float read(){
    cout<<"enter no 1 : ";
    cin>>n;
    cout<<"enter no 2 : ";
    cin>>d;
    }
    
};
int main()
{
    exception1 obj;
    obj.n;
    obj.d;
    obj.r;
    obj.read();
    try{
        if(obj.d==0)
            throw 0;
        obj.r=obj.n/obj.d;
        cout<<"n is "<<obj.n<<"/"<<"d is"<<obj.d<<" = "<<obj.r;
    }
    catch(int NDRexception){
        cout<<"Logical Error: Cant divide by 0 : "<<NDRexception;
    }
    return 0;
}

//exception handling checking

#include <iostream>
using namespace std;

int main()
{
    int v1=100;
    cout<<"when try block is not in use"<<endl;
    try{
        cout<<"inside the try block uses"<<endl;
        if(v1<100)
            throw v1;
        cout<<"after exception is block - thrown exception"<<endl;
    }
    catch(int v1){
        cout<<"exception mange here in catch block"<<v1<<endl;
    }
        
    return 0;
}

//exception handling subtraction

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter no 1 ";
    cin>>a;
    cout<<"enter no 2 ";
    cin>>b;
    try{
        if((a-b)==0)
            throw (a-b);
        
        if((a*b)>10)
            throw (a*b);
        
        if((a/b)==1)
            throw (a/b);
    }
    catch(int diff){
        cout<<diff<<endl;
    }
    catch(int mul){
        cout<<mul<<endl;
    }
    catch(int divided){
        cout<<divided<<endl;
    }
    return 0;
}
