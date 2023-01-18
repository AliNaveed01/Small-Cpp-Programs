#include <iostream>
using namespace std;
int isEven (int range)
{
	cout<<"Even numbers are : "<<endl;
	for (int x=1;x<range;x++)
	{
		//even numbers
		if(x%2==0)
		{
			cout<<x<<endl;
		}
		
	}

	return 0;
}
int isOdd (int range)
{
	cout<<"Odd numbers are : "<<endl;
	for(int x=1;x<range;x++)
	{
		//odd numbers
		if(x%2!=0)
		{
			cout<<x<<endl;
		}
	
	}

	return 0;
}
int main()
{
	int range;
	cout<<"enter range : ";
	cin>>range;
	isEven(range);
	isOdd(range);
	system ("pause");	
}
