#include <iostream>
using namespace std;
int main ()
{
int number,a=0,b=1,c=2,d,final;
cout<<"please enter the value : ";
cin>> number;
for(int i=1;i<number;i++)
{
d=a*b*c;
if(d==number)
{
final=d;
break;
}
else
{
a++,b++,c++;
}
}
if(final==number)
{
cout<<"the consecutive numbers are : ";
cout<<a<<" * "<<b<<" * "<<c;
}
else
{
cout<<"There are no consecutive numbers of this value"<<endl;
}
}
