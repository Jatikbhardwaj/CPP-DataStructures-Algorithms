#include<iostream>
using namespace std;
int main()
{
int n,fact=1;
cin>>n;
int i=n;
while(i!=0){
    fact=fact*i;
    i-=1;
}
cout<<fact<<endl;
}
