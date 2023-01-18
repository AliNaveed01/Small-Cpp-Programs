//selection sort
 #include<iostream>
using namespace std;

int main()
{
int size;

cout<<"The size of array is : ";
cin>>size;
int arr[size];
for(int i=1;i<=size;i++)
{
cout<<"Enter values: "<<endl;
cin>>arr[i];
}

// for ascending order

for(int i=0;i<size-1;i++)
{
for(int j=i+1; j<size;j++)
{
if(arr[j]<arr[i])
{
int temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;

}
}

}

for(int i=0;i<size;i++)
{

cout<<arr[i]<<" ";
}
}
