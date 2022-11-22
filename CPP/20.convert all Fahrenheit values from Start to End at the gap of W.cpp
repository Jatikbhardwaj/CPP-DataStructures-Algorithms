#include<iostream>
using namespace std;
int main()
{
int s,e,g;
cin>>s>>e>>g;
for(int i=s;i<=e;i+=g)
{
    int c=(i-32)*5/9;
    cout<<i<<" "<<c<<endl;
}
}
