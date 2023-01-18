#include<iostream>
using namespace std;
int main()
{
int num,num1,sum=0;
cout<<"please enter the number: ";
cin>>num;

while(num!=0)
{
num1=num%10;
sum=sum+num1;
num/=10;
}
cout<<"the sum is = "<<sum<<endl;
}
