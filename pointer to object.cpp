#include <iostream>
using namespace std;

class boy{
	public:
		int age=12;
		float height=1.23;
		
		void print(){
		cout<<"Yes";
}
};

int main()
{

boy b1;	
cout<<b1.age<<endl;
cout<<b1.height<<endl;
b1.print();
// pointer hamesha uski apni datatype ko point krta h
boy *ptr = &b1;	// declaration

cout<<ptr->age<<endl;	// agr ptr object hota to ptr.age krke cout krty
cout<<ptr->height<<endl;	// same condition goes for 

ptr-> print();
delete ptr;
ptr = NULL;
}
