#include<iostream>
using namespace std;

void encrypt(int arr,int row,int col)
{
for(int i=0;i<row;i++)
{
for(int j=0;j<row;j++)
{
arr[i][j]= arr[i+1][j+1];
}
}

for(int i=0;i<row;i++)
{
for(int j=0;j<row;j++)
{
cout<<arr[i][j]<<"  ";
}
cout<<endl;
}
}
void decrypt(int arr,int row,int col)
{
for(int i=0;i<row;i++)
{
for(int j=0;j<row;j++)
{
arr[i][j]= arr[i+1][j-1];
}
}

for(int i=0;i<row;i++)
{
for(int j=0;j<row;j++)
{
cout<<arr[i][j]<<"  ";
}
cout<<endl;
}
}

int main()
{
int row,col;
cin>>row;
cin>>col;

int arr[row][col];

for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cin>>arr[i][j];
}
}

cout<<"encrypted array is : "<<endl;
cout<<encrypt(arr,row,col);


cout<<"decrypted array is: "<<endl;
cout<<decrypt(arr,row,col);

return 0;
}
