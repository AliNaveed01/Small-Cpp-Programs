/*
This code is all about pointers in c++ and how they work
*/
#include<iostream>
using namespace std;

void func(int* x)
{
	cout << "copy of pointer" << endl;
}
void func(int*& x)
{
	cout << "reference of pointer" << endl;
}
void func(int& x)
{
	cout << "reference of value" << endl;
}

int main()
{
	// pointers have no specific data type but store refererence to the variables
	int* int_ptr;
	int x = 5;
	int& ref_int = x;
	int_ptr = &ref_int;
	// Now int_ptr stores the address whereas ref_int is the reference of the variable
	cout << int_ptr << endl; // will output the address
	cout << *int_ptr << endl; // will output the value by using dereference operator
	cout << ref_int << endl; // will output the value

	// passing pointers to functions
	//func(int_ptr); // gives error as can be used in both ways
	func(ref_int); // works by reference of value

	// using pointers to create and access arrays
	// we can accomplish this by using unique ptr to avoid delete]
	int size =5;
	int *arr_1d=new int[size];
	//int size = sizeof(arr_1d) / sizeof(arr_1d[0]); // calculating sizeof an array but this method can not be used for a pointer
	for (int i = 0; i < size; i++)
	{
		*(arr_1d + i) = i;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr_1d[i] << endl;
	}
	// Above are the two methods to access an array via pointers
	delete[] arr_1d;
	arr_1d = nullptr;

	// using pointer for 2d dynamic arrays
	int row = 5, col = 5;
	int** arr_2d = new int* [row];
	for (int i = 0; i < row; i++)
		arr_2d[i] = new int[col];
	// writing values to array
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr_2d[i][j] = i * j;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << *(*(arr_2d + i) + j) << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
	{
		delete[] arr_2d[i];
	}
	delete[] arr_2d;
	arr_2d = nullptr;

	// using const with pointers


}