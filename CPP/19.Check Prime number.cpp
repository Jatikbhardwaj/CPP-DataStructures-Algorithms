#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,factor=0;
cout<<"Enter the number to check whether it's a Prime or not "<<endl;
cin>>n;
for(int i=2;i<=sqrt(n);i++)
{
    if(n%i==0)
    {
        factor=factor+1;
    }
}
if(factor>=1){
    cout<<"Not a Prime"<<endl;
}
else{
    cout<<"Yes its a Prime"<<endl;
}
}
