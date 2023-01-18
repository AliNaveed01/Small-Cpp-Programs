#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key)
{
int count =0,pos=0;
for(int i=0;i<size;i++)
{
if(arr[i]==key)
{
count++;
pos=i;
}

}
if(count ==0)
{
return -1;
}
else
{
cout<<"you entered key appeared "<<count <<" times in array "<<endl;
cout<<"last location was : ";
return pos;
}
}


int main()


{
	cout<<"this program is an example of linear search, it will return key if its there oherwise -1"<<endl;
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


cout<<linearSearch ( arr, size, key);
}
