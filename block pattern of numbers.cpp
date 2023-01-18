#include <iostream>
using namespace std;

int main()
{
    int height,startCounter=1,no;
    
    cout << "Enter height: ";
    cin >> height;
    
    for(int i=0;i<height;i++){
      no = startCounter;
      for(int j=0;j<height;j++){
        cout << no;
        no++;
        if(no > height)
          no = 1;
      }
      startCounter++;
      cout << endl;
    }
    
    return 0;
}
