#include<iostream>
using namespace std;
int main()
{
float pen,pencil,eraser,total;
cin>>pen>>pencil>>eraser;
total=pen+pencil+eraser;
cout<<total<<endl;
cout<<"After 18% GST "<<endl;
float newTotal=total+(0.18*total);
cout<<newTotal;


}
