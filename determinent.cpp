#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter the size of square matrix: ";
	cin>> size;
	
	int arr[size][size];
	
	cout<<"enter values: "<<endl;
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
	
	int det=0;
	det=det+(arr[0][0]*arr[size][size]);
	for(int i=1;i<size-1;i++)
	{
		for(int j=1;j<size-1;j++)
		{			
				
		}
		
	}
	
	cout<<det<<endl;
	
	return 0;
}
