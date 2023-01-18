#include <iostream>
#include <climits>
using namespace std;

int main()
{
int size,min=INT_MAX,max=INT_MIN;
cout<<"please enter the size of array: ";
cin>>size;
int arr[size];

for(int i=0;i<size;i++)
{
cout<<"enter values: ";
cin>>arr[i];
if(arr[i]<min)
{
min=arr[i];
}
if(arr[i]>max)
{
max=arr[i];
}
}


for(int i=0;i<size;i++)
{

cout<<arr[i]<<endl;

}
cout<<"minimum number entered is "<<min<<endl;
cout<<"maximum number entered is "<<max<<endl;

}
