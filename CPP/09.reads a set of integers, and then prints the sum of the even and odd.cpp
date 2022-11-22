#include<iostream>
using namespace std;
int main()
{
int n,evensum=0,oddsum=0,choice;
do{

cout<<"Enter the number "<<endl;
cin>>n;
    if(n%2==0){
      evensum+=n;
    }
    else
    {
        oddsum+=n;
    }
cout<<"U want to continue then PRESS 1 else PRESS 0"<<endl;
cin>>choice;
}

while(choice==1);
cout<<"sum of even numbers:- "<<evensum<<endl;
cout<<"sum of the odd numbers:- "<<oddsum<<endl;

}

