#include<iostream>
using namespace std;
int main()
{
int sum=0;
for(int i=0;i<25;i++){
        int number;
        cout<<"Enter "<<i+1<<" exam score : "<<endl;
        cin>>number;
    sum=sum+number;
}
int average=sum/25;
cout<<"Average from 25 exam scores : "<<average<<endl;
}
