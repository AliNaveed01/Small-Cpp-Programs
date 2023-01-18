#include <iostream>
using namespace std;

void passByAdress(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
// pointer ban jaty hain is program me jo point krty hain adress me pari hui value ko
}

int main()
{
int a,b;
cout<<"Enter the 1st value";cin>>a;
cout<<"Enter the 2nd value";cin>>b;

//before swapping 

cout<<a<<" "<<b;


//calling function

passByAdress(&a,&b);
cout<<"After swapping, the numbers are: "<<a<<" "<<b;
system ("pause");
return 0;
}
