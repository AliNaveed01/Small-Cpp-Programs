#include <iostream>
using namespace std;

void passByRefrence(int &x,int &y)
{
	
	// new memory locations me value store hoti hai pass by value me jjbke pass by refrence me usi memory location ko new name dedia jata hai
int temp=x;
x=y;
y=temp;
}

int main()
{
int a,b;
cout<<"Enter the 1st value";cin>>a;
cout<<"Enter the 2nd value";cin>>b;

//before swapping 

cout<<a<<" "<<b;


//calling function

passByRefrence(a,b);
// the same variables are given the new namein pass by refrence functions
cout<<"After swapping, the numbers are: "<<a<<" "<<b;
system ("pause");
return 0;
}
