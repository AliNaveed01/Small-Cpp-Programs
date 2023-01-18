#include <iostream>
#include <string>
using namespace std;


class boy{
	public:
		int age;
		float height;
		
		void print(){
		cout<<"Yes";
	}
};
int main()
{

boy *ptr = new boy;

cout<<ptr->age<<endl;            // or (*ptr).age
cout<<ptr->height<<endl;      
ptr-> print();

delete ptr;
ptr=0;
}
