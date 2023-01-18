#include<iostream>
using namespace std;

int main()
{
	int row,col;
	cout<<"enter no of rows: ";
	cin>>row;
	cout<<"enter the no of columns: ";
	cin>>col;
	
	int arr[row][col];
	
	cout<<"enter values: ";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];		
		}
	}
	cout<<"The orignal array is: "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<" spiral order matrix is : ";
	int rowSt=0,rowEnd=row-1;
	int colSt=0,colEnd=col-1;
	
	while(rowSt<=rowEnd && colSt<=colEnd)
	{
		// first row
		for(int coll=colSt;coll<=colEnd;coll++)
		{
			cout<<arr[rowSt][coll]<<" ";
		}
		rowSt++;
		
		// last col
		for(int roww=rowSt;roww<=rowEnd;roww++)
		{
			cout<<arr[roww][colEnd]<<" ";
		}
		colEnd--;
		
		//last row
		
		for(int coll=colEnd;coll>=colSt;col--)
		{
			cout<<arr[rowEnd][coll]<<" ";
		}
		rowEnd--;
		
		// first col
		
		for(int roww=rowEnd;roww>=rowSt;roww++)
		{
			cout<<arr[row][colSt  ]<<" ";
		}
		colSt++;
	}
		
}
