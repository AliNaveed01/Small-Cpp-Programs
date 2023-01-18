#include<iostream>
using namespace std;

class dummy{
	public:
		int age ;
		float height;
		void pass_obj(dummy o)
		{           //Copy Constructor Called
			cout<<o.age<<endl;
		}

};



int main()
{
	dummy d;
	cout<<d1.age;'
	// issue in the code, will ask others/....
	cout<<pass_obj(d);
		
		return 0;
}

// By value creates a new object in function which is deep copy

// Problem = memory wastage
