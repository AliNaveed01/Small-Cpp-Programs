#include <iostream>
using namespace std;


class Dummy{
  public:
    int x;
    
    void print(){
      cout<<"print() called"<<endl;
    }
};


int main(){

Dummy d1;
Dummy d2;
d1.x=10;	// cuz x is public over here, agr na hota to yahan aik adad error ajata
d2.x=4;
cout<<d1.x<<endl;
cout<<d2.x<<endl;


}
