#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	
	int *ptr;
	ptr = new int [size];
	for(int i=0;i<size;i++)
	{
		cout<<"\n enter values: ";
		cin>>ptr[i];
	}
	
	cout<<"the values are: "<<endl;
	
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
	// deallocation
	delete[] ptr;
	ptr= NULL;
	system ("pause");		//WHY IS IT GIVING ERROR OVER HERE,,, MY IS IT PRINTING 0s............!
	return 0;
}
