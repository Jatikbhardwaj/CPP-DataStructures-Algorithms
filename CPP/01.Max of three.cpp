#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
cin>>a>>b>>c;
if(a>b){
    if(a>c){
        cout<<"A is greator"<<endl;
    }
    else
        cout<<"C is greator"<<endl;
}
else if(b>c){
    cout<<"B is greator"<<endl;
}
else
    cout<<"C is greator"<<endl;
}
