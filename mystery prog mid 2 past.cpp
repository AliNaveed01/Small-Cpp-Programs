#include<iostream>
using namespace std;

bool MysteryFunction(int arr[], int size, int& y)
{
int j,temp;
bool done = false;
for (j=size-1;j>=0;--j)
{
	if (y > arr[j] )
	{
	temp = arr[j];
	arr[j] = y;
	y = temp;
	done = true;
	}
}
cout << endl;
for (int i = 0; i < size; i++) {
	cout << arr[i] << " ";
}
return done;
}
int main()
{
int z = 18;
int MyFirstArr[] = {10,13,17,19,25};
bool MoreMystery = MysteryFunction(MyFirstArr,5,z);
int z1 = 18;
int MySecondArr[] = {25,29,35,40,60,65};
bool AnotherMyatery=MysteryFunction(MySecondArr,6,z1);
return 0;
}
