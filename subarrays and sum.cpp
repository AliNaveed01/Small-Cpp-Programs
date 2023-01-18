#include<iostream>
using namespace std;

int main()
{
int size,sum=0;
cout<<"plz enter the size of array: ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
cout<<"enter values: ";
cin>>arr[i];
}

for (int i=0;i<size;i++)
{
 int sum=0;
for(int j=i;j<size;j++)
{
sum+=arr[j];
cout<<"sum of "<<i+1<<" part "<<j+1<<" subarray is"<<sum<<endl;
}
}

}
