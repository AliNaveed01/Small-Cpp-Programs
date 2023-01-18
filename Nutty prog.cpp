#include <iostream>
using namespace std;
int NuttyArray[5] = {4,7,8,11,20};
int EvenArray[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int counter;
int computeSumOfSquresOfOddItems(int NuttyArray[], int NUTTY_ARRAY_SIZE, int SumOfSquares)
{
	int square,sumofsquares;
	for(int i = 1 ; i <= NUTTY_ARRAY_SIZE ; i++ )
	{
		if(NuttyArray[i] % 2 !=0){
		square = NuttyArray[i] * NuttyArray[i];
		sumofsquares = square + sumofsquares;
		counter++;
		}
	}
	return sumofsquares;
}

int ConstructEvenArray (int NuttyArray[], int EvenArray[], int NUTTY_ARRAY_SIZE, int EVEN_ARRAY_SIZE)
{
	int Evenc=5-counter;
	int Even[Evenc];
	int x=0;
	for(int i = 0 ; i < NUTTY_ARRAY_SIZE ; i++ )
	{
		
			if(NuttyArray[i]%2 == 0 ){
			Even[x] = NuttyArray[i];
			x++;
			if(x == Evenc)
			  break;
			}
			 
	}
		
		for(int j = 0 ; j < Evenc; j++)
		{
			EvenArray[j]=Even[j];	
		}
		
		for(int j = 0 ; j <10; j++)
		{
			cout<<EvenArray[j]<<" ";
		}
}




int main()
{
	const int NUTTY_ARRAY_SIZE = 5;
	const int EVEN_ARRAY_SIZE  = 10;
	int SumOfSquares = 0;
	cout<<"SUM OF SQUARE OF ODD ELEMENTS = "<<computeSumOfSquresOfOddItems(NuttyArray,NUTTY_ARRAY_SIZE,SumOfSquares)<<endl;
	ConstructEvenArray (NuttyArray, EvenArray, NUTTY_ARRAY_SIZE,EVEN_ARRAY_SIZE);
	return 0;	
}