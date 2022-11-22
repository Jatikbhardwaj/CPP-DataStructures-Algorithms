#include<iostream>
using namespace std;
int main()
{
int x,n;//x^n
cin>>x>>n;
int mul=x;
while(n>1){
    x=x*mul ;
    n--;
}
cout<<x<<endl;
}
