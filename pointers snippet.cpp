#include<iostream>
using namespace std;

int main()
{

	int x = 50;
	int* intptr = &x;	// adress of point krne lggya pointer
	int** int2ptr = &intptr;	//ptr2 ptr1 k adress ko point krne lggya jo k mazeed agay x k adress ko point krrha h
	int*** int3ptr = &int2ptr;	//ptr3 points to ptr2 and ptr 2 points to ptr 1 and ptr 1 points to x whos value is 50 
	cout << *intptr << endl;
	cout << **int2ptr << endl;
	cout << ***int3ptr << endl;
	cout<<intptr<<endl;
	cout<<int2ptr<<endl;
	cout<<int3ptr<<endl;	
	
	system ("pause");
	return 0;
}
