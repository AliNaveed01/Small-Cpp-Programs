#include<iostream>
using namespace std;

int main()
{
int size;
int max=0;
cout<<"Enter the size of array: ";
cin>> size;
int arr[size];
for(int i=0;i<size;i++)
{
cout<<"enter values: ";
cin>>arr[i];
if(arr[i]>max)
{
max=arr[i];
}
}
cout<<"your entered arrays is: ";

for(int i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}

cout<<"And the highest number entered is : "<<max<<endl;

}
