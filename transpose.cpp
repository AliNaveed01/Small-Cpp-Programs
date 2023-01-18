#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter size: ";
	cin>>size;
	
	int arr[size][size];
	
	cout<<"enter values: ";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"you entered: "<<endl;
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	// transpose
	cout<<"tranpose matrix is : "<<endl;;
	for(int i=0;i<size;i++)
	{
		for(int j=i;j<size;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
