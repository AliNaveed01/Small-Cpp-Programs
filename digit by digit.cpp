#include <iostream>
using namespace std;
int main()
{
int n,sumEven=0,sumOdd=0;
cout<<"Please enter the nth number: ";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<i<<" ";
if(i%2==0)
{
sumEven=sumEven+i;
}
else
{
sumOdd=sumOdd+i;
}
}
cout<<"\nsum of evens is: "<<sumEven<<endl;
cout<<"sum of odds is: "<<sumOdd<<endl;
}
