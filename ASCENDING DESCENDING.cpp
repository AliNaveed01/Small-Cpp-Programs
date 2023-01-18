#include <iostream>
using namespace std;
int main()
{
 
int a,b,c;
cout<<"enter three numbers = ";
cin>>a>>b>>c;

if(a<b&&b<c)
{
cout<<"the ascending order is:"<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;

///////////////

cout<<"the descending order is:"<<endl;
cout<<c<<endl;
cout<<b<<endl;
cout<<a<<endl;
}
else if(b<c&&c<a)
{
cout<<"the ascending order is:"<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<a<<endl;

///////////////

cout<<"the descending order is:"<<endl;
cout<<a<<endl;
cout<<c<<endl;
cout<<b<<endl;
}
else if(c<b&&b<a)
{
cout<<"the ascending order is:"<<endl;
cout<<c<<endl;
cout<<b<<endl;
cout<<a<<endl;

///////////////

cout<<"the descending order is:"<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}
else if(a<c&&c<b)
{
cout<<"the ascending order is:"<<endl;
cout<<a<<endl;
cout<<c<<endl;
cout<<b<<endl;

///////////////

cout<<"the descending order is:"<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<a<<endl;
}
else if(c<a&&a<b)
{
cout<<"the ascending order is:"<<endl;
cout<<c<<endl;
cout<<a<<endl;
cout<<b<<endl;

///////////////

cout<<"the descending order is:"<<endl;
cout<<b<<endl;
cout<<a<<endl;
cout<<c<<endl;
}
if(b<a&&a<c)
{
cout<<"the ascending order is:"<<endl;
cout<<b<<endl;
cout<<a<<endl;
cout<<c<<endl;

///////////////

cout<<"the descending order is:"<<endl;
cout<<c<<endl;
cout<<a<<endl;
cout<<b<<endl;
}
system ("pause");
return 0;
}