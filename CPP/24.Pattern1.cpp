#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;                         //3
for(int i=1;i<=n;i++){          //1<=3      //2<=3          //3<=3
    for(int j=1;j<=n;j++){      //1<=3      //1<=3//2<=3    //1<=3//2<=3//3<=3
        if(j<=i){               //1<=1      //1<=2//2<=2    //1<=3//2<=3//3<=3
            cout<<j;            //1         //1   //12      //1   //12  //123
        }
        else
            cout<<" ";
    }
    cout<<endl;
}
}
