#include <iostream>
using namespace std;

int passByValue(int a,int b)
{
int temp=a;
a=b;
b=temp;

cout<<a <<" "<<b<<endl;
return 0;
}

int main()
{
int a,b;
cout<<"Enter the 1st value";cin>>a;
cout<<"Enter the 2nd value";cin>>b;

//before swapping 

cout<<a<<" "<<b<<endl;


//calling function

passByValue(a,b);


system ("pause");
return 0;
}
