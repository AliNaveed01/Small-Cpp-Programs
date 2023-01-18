#include <iostream>
using namespace std;
int main()
{
	int i=1,x,y=0;
	cout<<"Enter the number of which you want a table =";
	cin>>x;
	
	//using for loop
	
	
/*	for(i=1;i<=10;i++)
	{
		y=x*i;
		cout<<x<<"X"<<i<<"="<<y<<endl;
	} */
	

// using while loop 

	while(i<=10)
	{
		y=x*i;
		cout<<x<<"X"<<i<<"="<<y<<endl;
		i++;
	}
	system ("pause");
	return 0;
}

