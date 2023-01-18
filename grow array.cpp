///////////////////////////////////////////////////
// THIS CODE IS A PRACTICE OF GROWING ARRAY
#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	
	int *arr= new int [size];
	for (int i =0;i<size;i++)
	{
		arr[i]=i;
		
	}
	
	int *temp = new int [size+1];
	
	for(int i=0;i<size;i++)
	{
		temp[i]= arr[i];
	}
	cin>>temp[size];
	size++;		
	delete[] arr;
	arr= temp;
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	system("pause");
	return 0;
}
