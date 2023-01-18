#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
	//int count=0; erroe	// static member varaibes are those jinko sb objects share krty han, ye sirf aik dfa memory lete han
    // following code me static int ko chalane ka tareeqa bataya gya hai 
    // static variables ko chalane k lie static fucntion bnana prta h'
    
    // age ham is case me static nai krty count ko to wo bar bar 0 hojai ga or jb count++ hga to wo always 1 rhe ga

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        
    }

  static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}

