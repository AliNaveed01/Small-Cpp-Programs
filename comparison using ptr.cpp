#include<iostream>
using namespace std;

int main()
{
  int *ptr1,*ptr2;
  int x=2;
  ptr1=&x;
  ptr2=&x;
  if(*ptr1==*ptr2) // comparison of values
  {
    cout<<"True Values"<<endl;
  }
  if(ptr1==ptr2) // comparison of address
  {
    cout<<"True Address"<<endl;
  }
  system("pause");
  return 0;
}
