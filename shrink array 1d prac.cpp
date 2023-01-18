// Code to delete elements from array and shrink the array

#include <iostream>
using namespace std;


int main()
{

  int size;
  cout<<"enter size of array: ";
  cin >>size;
  
  int *dArray= new int[size];

  cout <<"Enter your numbers to populate array:" <<endl;

  for (int i= 0 ; i<size; i++)
      cin>>dArray[i]; 

  cout<<"Values in array are:"    <<endl; 
  for (int i= 0 ; i<size; i++)
      cout<<dArray[i]<<", "; 



  cout<<"Which value do you want to delete? "<<endl;
  int del;
  cin>>del; 


  cout<<"You want to delete " <<del<<endl;  

  int count=0;
  for (int i= 0 ; i<size; i++)  
    {
      if (dArray[i]==del)
       count++;
    }

  cout<< "Occurances of "<<del <<" in array: "<< count; 

  cout<<endl;  


  int *newArray= new int[size-count];

  int j=0; 
  for(int i=0, j=0; i<size; i++)
  {
     if(dArray[i]!=del)
       {
         newArray[j++]= dArray[i];               
       }
  }

  delete[] dArray;
  dArray= newArray; 
  size= size-count; 
  newArray= NULL;

  cout<<"Values in array now are:"    <<endl; 
  for (int i= 0 ; i<size; i++)
      cout<<dArray[i]<<", "; 
  cout<<endl;


}
