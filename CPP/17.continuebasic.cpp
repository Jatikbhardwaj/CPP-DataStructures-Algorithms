#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number "<<endl;
cin>>n;
cout<<"Answer"<<endl;
for(int i=1;i<=n;i++)
{
if(i==3){
continue;
}
cout<<i<<endl;
}
}
