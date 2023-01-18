#include <iostream>
using namespace std;
int main()
{
	// ascending triangle it is...
int height;
cout<<"please enter the height: ";
cin>>height;

for(int i=0;i<height;i++)
{
for(int j=0;j<=i;j++)
{
cout<<" * ";
}
cout<<endl;
}
}
