#include<iostream>
using namespace std;
int main()

{
	int i;
	cout<<"enter the number of rows: ";
	cin>>i;

	int arr[i][i];

	for(int x=0;x<i;x++)
	{
		for(int y=0;y<i;y++)
		{	
			cin>>arr[x][y];
		}
	}	
	
	cout<<"you entered: "<<endl;

	for(int x=0;x<i;x++)
	{
		for(int y=0;y<i;y++)
		{	
			cout<<arr[x][y]<<"  ";
		}
		cout<<endl;
	}

	int trace=0;
	
	for(int x=0;x<i;x++)
	{
		for(int y=0;y<i;y++)
		{
			if(x==y)
			trace= trace + arr[x][y];	
		}
	}
	cout<<"the sum of array is : "<<trace<<endl;
	
	return 0;
}
