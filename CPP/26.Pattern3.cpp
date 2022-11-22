#include<iostream>
using namespace std;
int main()
{
int n,k=1;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j>=(n+1)-i){
        cout<<k;
        k++;}
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
}
