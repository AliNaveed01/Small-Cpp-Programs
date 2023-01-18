//bubble sort
// isme depend krta hia k kitni iterations k bad apko apka sorted array milega
// for example, agr apke pass  n elemts hain array me
// to apko n-1 iterations k bad sorted array miljai ga
// or second bat,
//ith iteration = n-i

#include<iostream>
using namespace std;

int main()
{
int size;
cout<<"Enter the size of array: ";
cin>> size;

int arr[size];

for(int i=0;i<size;i++)
{
cout<<"Enter value: ";
cin>>arr[i];
}

// bubble sort

int counter=1;
while(counter<size)
{
for(int i=0;i<size-counter;i++)
{
if(arr[i]>arr[i+1])
{
int temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
}
counter++;
}

cout<<"The sorted array is: "<<endl;

for(int i=0;i<size;i++)
{
cout<<arr[i]<<" ";
}
}
