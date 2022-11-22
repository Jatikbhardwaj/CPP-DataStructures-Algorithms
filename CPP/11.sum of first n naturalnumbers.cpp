#include<iostream>
using namespace std;
int main()
{
int sum=0,n,counter=1;
cout<<"Enter the number"<<endl;
cin>>n;
while(counter<=n){
    sum+=counter;
    counter++;
}
cout<<"Sum of "<<n<<" natural numbers are : "<<sum<<endl;
}
