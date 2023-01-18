
#include<iostream>
using namespace std;

int frequency(int arr[],int size,int key)
{
int freq=0;
for(int i=0;i<size;i++)
{
if(arr[i]==key)
{
freq++;
}

}
if(freq!=0)
{
return freq;
}
else
{
return -1;
}
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

cout<<"enter the number you wanna find frequency: ";
cin>>key;


cout<<frequency( arr, size, key);
}
