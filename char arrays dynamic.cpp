#include <iostream>
using namespace std;
int main()
{
	int size =100;
	// datatype, pointer , variable name is equal to new character , array size in closed brackets
	char *arr= new char[size];
	//cin>> arr;
	
	cin.getline(arr,size); 			//puri line leleta ha ye

	
	cout<<arr<<endl<<endl;
	
	delete[] arr;
	return 0;
}
