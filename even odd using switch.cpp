#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"please enter the number: ";
cin>>num;
switch (num%2)
{
	case 0:
		cout<<"even number..!"<<endl;
		break;
	case 1:
		cout<<"odd number..!"<<endl;
}

system ("pause");
return 0;
}
