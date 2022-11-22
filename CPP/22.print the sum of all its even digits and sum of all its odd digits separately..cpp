#include<iostream>
using namespace std;
int main()
{
int digit,evensum=0,oddsum=0;
cin>>digit;
while(digit!=0){
    int rem=digit%10;
    if(rem%2==0){
        evensum+=rem;
    }
    else{
        oddsum+=rem;
    }
    digit=digit/10;
}
cout<<evensum<<" "<<oddsum;
}
