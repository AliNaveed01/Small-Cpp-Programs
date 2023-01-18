#include<iostream>
using namespace std;
int main()
{
	start:
	int n1,n2,n3;
	cout<<"enter style of array: ";
	cin>>n1>>n2>>n3;
	
	int arr1[n1][n2];
	cout<<"enter values for matrix 1 and matrix 2: "<<endl;
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	
	int arr2[n2][n3];
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n3;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	cout<<"array 1 is: "<<endl;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	cout<<"array 2 is : "<<endl;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
if(n1==n3)
{
		
	int ans[n1][n3];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			ans[i][j]=0;
		}
	}
	
	// all initiallization done
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			for(int k=0;k<n2;k++)
			{
				ans[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	cout<<"answer is: "<<endl;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}

else
{
	cout<<"invalid input:/ "<<endl;
	goto start;
}
}
