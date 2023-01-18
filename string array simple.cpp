#include <iostream>
#include <string>
using namespace std;

int main() {
int a;
cout<<"enter lentgh of array = ";
cin>> a;
  string cars[a];
  for(int i = 0; i < a; i++) {
    cout<<"enter values = ";
	cin >> cars[i];
  }
  for(int i=0;i<a;i++)
  {
  	cout<<cars[i]<<endl;
  }
  return 0;
}// sinple printing hai ye

