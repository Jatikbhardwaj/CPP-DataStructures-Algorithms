#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n+(n-1);j++){
        if(j>(n-i)&&j<=(n-1)+i){
            cout<<"*";
        }
        else
            cout<<" ";
    }
    cout<<endl;
}
}
