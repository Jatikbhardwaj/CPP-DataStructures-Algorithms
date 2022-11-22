#include<iostream>
using namespace std;
void hollow_rectangle(int rows,int coloumns)
{
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=coloumns;j++){
            if(i==1||i==rows||j==1||j==coloumns)
            cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
hollow_rectangle(10,15);
}
