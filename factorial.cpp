#include <iostream>
using namespace std;
int main()
{
double num,fact=1;
cout<<"please enter the number: ";
cin>>num;
for(int i=1;i<=num;i++)
{
fact=fact*i;
}
cout<<"Factorial of "<<num<<" is: "<<fact<<endl;
}
