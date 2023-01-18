#include<iostream>
#include<cmath>
using namespace std;

int floor(float x)
{
int num=x;

if(num==x)
{
}
else if(x>0)
{
	num--;
	return num;
}
}
int main()
{
	float x;
	cout<<"plz enter value: ";
	cin>>x;
	floor(x);
	return 0;
}

