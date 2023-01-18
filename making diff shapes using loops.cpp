#include<iostream>
using namespace std;
int main()
{
	// making rectangles
	
	
	
	//comment out krdie
/*	int row,col;
	cout<<"enter rows =";
	cin>> row;
	cout<<"enter columns =";
	cin>> col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<" * ";
		}
		cout<< endl;
	}
	
	
	
	// agr numbers print krwane hon to simple star ki jgh "j+1" likhdo hojai ga print upto jahan tk ap kaho8 nai to user se lelo
	// agr reverse counting likhwani ho to reverse loop chalao yani ulta krdo
	
	
	
	// making triangle
	//int length;
	cout<<"enter length = ";
	cin>>length;
	
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<" * ";	
		}
		cout<<endl;
	}
	// agr numbers print krwane hian to same j+1 print krdo instead of star hojai ga
	// reverse loop lagao ge to reverse me numbers print hojai ge
	
	
	
	
	// inverted triangle*/
	
	int length;
	cout<<"enter length = ";
	cin>>length;
	for (int i=0;i<length;i++)
	{
		for (int j=0;j<length-i;j++)
		{
			cout<<" * ";
		}
		cout << endl;
	}

	
	system ("pause");
	return 0;
}
