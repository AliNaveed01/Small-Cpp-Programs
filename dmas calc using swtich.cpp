#include <iostream>
using namespace std;
int main()
{
float num1,num2;
cout<<"please enter the first number: ";
cin>>num1;
cout<<"please enter the second number: ";
cin>>num2;
char sign;
cout<<"please enter the sign: ";
cin>>sign;


switch(sign)
{
case '+':
cout<<num1<<"+"<<num2<<" is: "<<num1+num2<<endl;
break;

case '-':
cout<<num1<<"-"<<num2<<" is: "<<num1-num2<<endl;
break;

case '*':
cout<<num1<<"*"<<num2<<" is: "<<num1*num2<<endl;
break;

case '/':
cout<<num1<<"/"<<num2<<" is: "<<num1/num2<<endl;
break;

default:
cout<<"invalid sign"<<endl;
}
}