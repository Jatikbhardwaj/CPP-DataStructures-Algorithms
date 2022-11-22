#include<iostream>
using namespace std;
int main()
{
double Basic_salary,hra,da,pf,allow;
char grade;
cin>>Basic_salary;
cin>>grade;
if(grade=='A'){
    allow=1700;
}
else if(grade=='B'){
    allow=1500;
}
else{
    allow=1300;
}
hra=Basic_salary*.20;
da=Basic_salary*.50;
pf=Basic_salary*.11;

double Total_salary=Basic_salary+hra+da+allow-pf;
cout<<Total_salary;

}
