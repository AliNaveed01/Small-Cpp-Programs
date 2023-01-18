#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	
	int size;
	cout<<"Enter size: ";
	cin>> size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter values: ";
		cin>>arr[i];
	}
		
	int freq=0;
	
	for(int i=0;i<size;i++)
	{
		freq=0;
		for(int j=0;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				freq++;
			}
		}
		cout<<"frequency of "<<arr[i]<<" is "<<" "<<freq<<endl;
		if(freq>(size/2))
		{
			cout<<" popular no is : "<<arr[i];
			return 0;
		}
	}
}
