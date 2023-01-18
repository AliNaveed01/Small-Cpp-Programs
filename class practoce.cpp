/*#include <iostream>
using namespace std;

class employee
{
private:
	int a;
	int b;
	
public:
	void setdata(int a,int b);
	void getdata();
	
};
 
void employee::setdata(int a, int b)
{
	this->a=a;
	this->a=b;
}

void employee:: getdata()
{
	cout<<a<<endl;
	cout<<b<<endl;
}

int main()
{
	employee harry;
	harry.setdata(1,2);
	harry.getdata();
}
*/
#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}

