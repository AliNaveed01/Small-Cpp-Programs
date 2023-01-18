#include<iostream>
using namespace std;
int main()
{
char word;
cout<<"enter the word which you wanna check: ";
cin>> word;
if(word>='A'&& word<='Z')
{
cout<<"it is a capital letter"<<endl;
}
else if (word>='a'&& word<='z')
{
cout<<"it is a small letter"<<endl;
}
else
{
cout<<"none"<<endl;
}
return 0;
}

