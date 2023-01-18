#include<iostream>
using namespace std;
int main()
{
int  num,cube=0;
cout<<"please enter the number of terms: ";
cin>>num;
for(int i=1;i<=num;i++)
{
cout<<"number is "<<i<<" and the cube is: ";
cube=i*i*i;
cout<<cube<<endl;
}
}
