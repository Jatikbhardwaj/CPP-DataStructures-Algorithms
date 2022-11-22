#include<iostream>
using namespace std;
int main()
{

int n,rev=0,i=n;
cout<<"Enter the number"<<endl;
cin>>n;

/*while(n!=0){

    int rem=n%10;
       n=n/10;
       cout<<rem;
}
cout<<endl;
cout<<"--------OR--------"<<endl;*/
while(n!=0){
    int lastdigit=n%10;
    rev=(rev*10)+lastdigit;
    n=n/10;
}
cout<<rev<<endl;
}
