#include<iostream>
using namespace std;

int pattern9()
{
	int totalrows=5;
	int i,j,k;
	cout<<"PATTERN 9: "<<endl;
	cout<<"\t\t";
	for(i=1;i<=2*totalrows-1;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(int i=1;i<=totalrows;i++)
	{
		cout<<"\t\t";		
		for( j=totalrows-i;j>=1;j--)
		{
			cout<<"*";
		}
		for( k=1;k<=2*i-1;k++)
		{
			cout<<" ";
		}
		for( j=totalrows-i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=totalrows-1;i>=1;i--)
	{
		cout<<"\t\t";	
		for( j=1;j<=totalrows-i;j++)
		{
			cout<<"*";
		}	
		for( k=1;k<=2*i-1;k++)
		{
			cout<<" ";
		}
		for( j=1;j<=totalrows-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\t\t";
	for(i=1;i<=2*totalrows-1;i++)
	{
		cout<<"*";
	}
}
int  main()
{
pattern9();
return 0;

}
