#include<iostream>
using namespace std;

float floor(float num)
{
	int n=num;
	if(num-n==0)
	{
	return num;
	}
	if(num-n<0)
	{
	num++;
    num=n;
	return n;
	}
	if(num-n>0)
	{
	n++;
    num=n;
	return n;
	}
}
int main()
{
	float num;
	cin>>num;
	
	cout<<floor(num);
	return 0;
}
