#include <iostream>
using namespace std;
int main()
{
float amount,dollar,cents;
int dol;
char choice;
cout<<"Enter the amount in pakistani rupee: ";
cin>>amount;
dollar= amount/160;
cout<<"Enter the choice: (1 for only dollars and 2 for $and cents) :";
cin>>choice;
if(choice=='1')
{
cout<<"The amount in dollars is: "<<"$"<<dollar<<endl;
}
else if(choice=='2')
{
dol=dollar;
cents=dollar-dol;
cents=cents*100;
cout<<"The amount is: "<<dol<<"$"<<cents<<"cents"<<endl;
}
return 0;
}
