#include <iostream>
using namespace std;
int main()
{
int n, n1=1,n2=1,fabo;
cout<<"Please enter the number of sequence: ";
cin>> n;
cout<<"Fabonacci series is "<<endl;
cout<<n1<<endl<<n2<<endl;
for(int i=0;i<n-2;i++)
{
fabo=n1+n2;
cout<<fabo<<endl;
n1=n2;
n2=fabo;
}
}
