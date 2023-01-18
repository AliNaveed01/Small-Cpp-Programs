#include <iostream>
using namespace std;


/*prints 2D array*/
void print_2darray(int ** arr, int rows, int columns);
/*fills array with user given input*/
void input(int ** arr, int rows, int columns);
/*Allocate memory*/
int ** allocate( int row, int columns);
/*deallocate memory of 2D array and make the pointer nullptr*/
void deallocate(int **&arr, int rows)
{
	for (int i =0;i<rows;i++)
	{
		delete arr[i];
		arr[i] = NULL;
	}
	delete arr;
	arr = NULL;
	
	cout<<"\n\n deallocation done ..!"<<endl;
}

/*returns sum of two 2D arrays, both should be of same size*/
int ** sum (int **arr1, int **arr2, int rows, int columns);



int main()
{

	int rows=5, columns =4;
	// allocate
	int ** array2d=NULL;
	array2d=new int*[rows];
	for (int i=0;i<rows;i++)    
		array2d[i]=new int [columns];

	array2d[2][1]=10; // write
	cout<<array2d[2][ 1]<<endl;// read

	// fill 
	for (int i= 0; i<rows; i++)
		for (int j= 0; j<columns; j++)
			array2d[i][j]= (i*j)+1;

	//print
	for (int i= 0; i<rows; i++)
	{
		for (int j= 0; j<columns; j++)
			cout<< array2d[i][ j] <<", ";
		cout<<endl;
	}
	input(array2d, rows, columns);
	print_2darray(array2d, rows, columns);

	// allocation 
	int ** my_2Darrat= allocate(5,6);

	//deallocate
	for (int i=0;i<rows;i++)    
		delete [] array2d[i];
	delete [] array2d; 
	array2d= NULL; 


	system ("pause ");

}


void print_2darray(int ** p, int rows, int columns)
{
for (int i= 0; i<rows; i++)
{
	for (int j= 0; j<columns-1; j++)
	{
		cout<< p[i][ j]<< ", ";
	}
	cout<<p[i][columns-1]<<endl;
}
}

void input(int ** arr, int rows, int columns)
{
	cout<<"Enter the int values of array"<<endl;
	for (int i= 0; i<rows; i++)
{
	for (int j= 0; j<columns; j++)
	{
		cout<< "arr["<<i<<"]["<<j<<"]: ";
		cin>>arr[i][ j];
	}
	
}
}


int ** allocate( int rows, int columns)
{
	int ** temp = NULL;
	temp= new int*[rows];
	for (int i= 0; i<rows; i++)
		temp[i]= new int[columns];
	return temp; 
}
