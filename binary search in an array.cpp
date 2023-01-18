#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
int start=0;
int end=size;
while(start<=end)
{
	int mid=(start+end)/2;
	if(arr[mid]==key)
	{
		return mid;
	}
	else if(arr[mid]<key)
	{
		end=mid-1;
	}
	else
	{
		end=mid+1;
	}

}
return -1;
}


int main()
{
int size,key;
cout<<"please enter the size of array: ";
cin>>size;
int arr[size];

for(int i=0;i<size;i++)
{
	cout<<"enter values: ";
	cin>>arr[i];
}

cout<<"enter the number you wanna search: ";
cin>>key;


cout<<binarySearch(arr,size,key)<<endl;
}
