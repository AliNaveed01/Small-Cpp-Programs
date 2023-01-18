#include <iostream>
using namespace std;
int main()
{
int i,arr[10],a=10,sum=0;
cout<<"enter values(-1 to exit) = "; 
for(i=0;i<10;i++)
{
cin>>arr[i];
sum=sum+arr[i];
if(arr[i]==-1)
{
a=i;	// index store kro kisi dusre variable me or phr us index tk cout krwao
break;
}
}
cout<<"the output is = ";

for(i=0;i<a;i++)
{
cout<<arr[i]<<endl;
}
cout<<"sum is = "<<sum<<endl;
system ("pause");
return 0;
}
// ye baqi values me garbage kyu print horha hai?
//ye puchna ha ab abbass se
 
