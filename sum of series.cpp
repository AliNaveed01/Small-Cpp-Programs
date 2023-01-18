#include<cmath>
#include<iostream>
using namespace std;
int main()
{
float nth,sum,ser;
cout<<"please enter the value of nth term: ";
cin>>nth;

for(int i=1;i<nth;i++)
{
ser=1/(i*i);
cout<<"1/"<<i*(i)<<"="<<ser<<endl;
sum=sum+ser;
}
cout<<"the sum of above series is = "<<sum<<endl;
}
///an issue is here jo puchu ga
