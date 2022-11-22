#include<iostream>
using namespace std;
int main()
{
int n;
/*
for(int i=n;i>=0;){
cout<<"Enter number "<<endl;
cin>>n;
if(n%10==0){
    break;
}
else
    cout<<n<<endl;
}
cout<<"Sorry! I am out of the loop as I am the multiple of number 10 "<<endl;*/

//OR
do{
    cout<<"Enter ur number"<<endl;
    cin>>n;
    if(n%10==0){
        break;
    }
    cout<<n<<endl;
}
while(true);
cout<<"Sorry! I am out of the loop as I am the multiple of number 10 "<<endl;
}
