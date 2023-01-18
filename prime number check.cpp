#include <iostream>

using namespace std;

int main()
{
 	int N, M;
 	cout << "ENTER NUMBER 1" << " ";
    cin >> N;
    cout << "ENTER NUMBER 2" << " ";
    cin >> M;
 	bool IsPrime = false;
 	for(int K = N; K<=M;K++)
 	{
 		for(int D = 2;D < K;D++)
 		{
 			if(K%D == 0)
 			{
 				IsPrime = false;
 				break;
 			}
 			else
 			{
  				IsPrime = true;
 			}
 		}
           if(IsPrime == true)
 		{
 			cout <<K<< " is Prime" <<endl;
 		}     
 	}		

}