#include<iostream>
using namespace std;

int main()
{
int size;
cout<<"Plz enter the size of array: ";
cin>>size;

int arr[size];
for(int i=0;i<size;i++)
{
cout<<"ENTER VALUES ";
cin>>arr[i]; 
}

int count=2,current=2,comDiff=arr[1]-arr[0];
int ans=2;

while(count<size)
{
if(comDiff==arr[count]-arr[count-1])
{
current++;
}
else
{
comDiff=arr[count]-arr[count-1];
current=2;
}
ans=max(ans,current);
count++;
}
cout<<"largest arithmetic subarrray is: "<<ans<<endl;
return 0;
}


