#include<iostream>
using namespace std;
int main()
{
int a,total,comDiff,sum=0,AP;
cout<<"enter the first term: ";
cin>>a;
cout<<"enter the common difference: ";
cin>>comDiff;
cout<<"enter the no of term: ";
cin>>total;
for(int i=0;i<total;i++)
{
	AP=a+(i*comDiff);
	cout<<AP<<" ";
	sum=sum+AP; 
}
cout<<"\nThe Sum of the AP series is: "<<sum;
return 0;
}
