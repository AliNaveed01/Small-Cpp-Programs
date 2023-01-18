#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout<<"enter the value of rows: ";
	cin>> rows;
	cout<<"enter the value of cols: ";
	cin>> cols;
	// allocation of 2d array
	int **rowptr= new int *[rows];
	for(int i=0;i<rows;i++)
	{
		rowptr[i]= new int [cols];
	}
	
	cout<<"enter the values: "<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cin>>rowptr[i][j];
		}
	}
	
	//cout<<rowptr[1][2]<<endl<<endl;
	rowptr[1][2]= 88;
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<rowptr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<rows;i++)
	{
		delete[] rowptr[i];
	}
	
	delete[] rowptr;
	rowptr= NULL;
	
	
	return 0;
}
