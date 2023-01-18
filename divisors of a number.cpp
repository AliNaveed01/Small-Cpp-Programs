#include<iostream>
using namespace std;

int main()
{
int num,fact;
cout<<"please enter the number: ";
cin>> num;

cout<<"\n the divisors of this number will be:\n";

for(int i=1;i<=num;i++)
{
fact=num%i;
if(fact==0)
{
cout<<i<<endl;
}

}
}
