#include <iostream>
using namespace std;
int main()
{
int row,col;
cout<<"Enter the number of rows: ";
cin>>row;
cout<<"Enter the number of columns: ";
cin>>col;

int arr[row][col];

cout<<"enter values: "<<endl;

for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{

cin>>arr[i][j];
}
}


for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{

cout<<arr[i][j]<<" ";
}
cout<<endl;
}

int key,locR,locC;
cout<<"enter the number which u want to search in array: ";
cin>>key;


bool flag=false;
for(int i=1;i<=row;i++)
{
for(int j=1;j<=col;j++)
{

if(arr[i][j]==key)
{
	
	flag=true;
	locR=i;
	locC=j;
}
}
}

if(flag==true)
{
	cout<<"Element found at ooordinated : "<<locR<<" row "<< locC<<" col"<<endl;
}
else
{
	cout<<"element not found:/";
}

}


