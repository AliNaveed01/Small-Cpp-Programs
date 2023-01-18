/* Take a string input user and returns the pointer
of dynamic array containing that string
max number of characters in string can be 20*/
#include<iostream>
using namespace std;


char* getname()
{
	// get name in fixed size array
	cout<<"Enter name (not more than 20 characters long):" ;
	const int max_length= 21; // <TODO students: why is max_length 21>
	char temp[max_length];  
	cin.getline(temp, max_length); 
	int size=1;
	for (int i=0; temp[i]!='\0'; i++)
		size++;
	// create dynamic array of that size
	char * name= new char[size];
	//copy temp to name
	for (int i=0; i<size; i++)
		name[i]= temp[i];
	// return pointer of name, temp is local non-dyn array it will be deleted automatically
	return name; 
}

/*returns the number of characters in char string excluding '\0'*/

int getsize(char* arr)
{
	int size=0;
	for (int i=0; arr[i]!='\0'; i++)
		size++;
	return size;
}


int main()
{
	char * name= getname();
	cout<<"Name: "<<name<<endl;
	cout<<"characters in name: "<<getsize(name)<<endl;
	delete[] name; 

}


