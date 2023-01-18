#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
		// ye smj ni aya usne class k andr hi class ka object use kiya plus usne fucntion me b class k arguements bheje
        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;	// what does this mean
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        void printSum()
        {
        	 cout<<"The sum of complex numbers is "<<a<<" + "<<b<<"i"<<endl;	
		}
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);	// a or ab ki value 1,2 hgyi 
    c1.printNumber();	// yahan 1 + 2i print hgya

    c2.setData(3, 4);	// a or b ki val 3,4 hgyi
    c2.printNumber();	// yahan 3 +4i print hgya

    c3.setDataBySum(c1, c2);	// yahan 1+2i or 3+4i gye or wahan jake a ki val hgyi 4 or b ki 6
    c3.printSum();	// ab yahan print hoga 4+6i lets see
    return 0;
}

