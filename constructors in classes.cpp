#include <iostream>
using namespace std;

class Dummy{
  int x;
  int * ptr;// private pointer;

public:
  Dummy()	// default constructor	used to initialize all the data members of the class.
  {
    x = 0;
    ptr = new int[3];
    cout<<"Dummy() called"<<endl;
  }

  Dummy(int a)	// overloaded, parameterized constructors.
  {
    x = a;
    ptr = new int[3];
    cout<<"Dummy(int a ) called"<<endl;
  }

  ~Dummy(){
    delete[] ptr;
    ptr = NULL;
// for constructors, agr khali cons declare kiya hai to default  constructor chaljaiga
    cout<<"~Dummy Called"<<endl;// jitne objects banenge utni bar call honge destructors
  }
 
};

int main(){
 Dummy d1;
 Dummy s3(1);
 Dummy d2(4);
 

}
