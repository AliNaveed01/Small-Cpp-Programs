#include <iostream>
#include <string>
using namespace std;
/////////////class banai shop name ki
// basicaly is me hmne shop me mojud items ka number or unkii price rkhdi
// private me hmne uska name or price rkhdia so that usko direct main me na bulaya jia
// aik set price rkhdia jo k price of id dono ko unki respective arrays me daldeta hai jo k static array hai
// aik counter rkha hai jo as a index kam krrha hai id or price ki array me
// 

class Shop
{
	//string itemName[100];
    int itemId[100];
    int itemPrice[100];
    int counter=0;

public:
	// ham private members ko public k functions k zariye edit krwaskty han
	// yahan aik extra func banaya gya tha jo counter ko 0 set krrha tha but usko khtm krdia by initialising it with 0
    //void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
	//cout << "Enter Name of your item no " << counter + 1 << endl;
    //cin.getline (itemId[counter]);
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
    	// ill ask saboor abt that.
    	//cout << "The Name of the item is " << itemName[i]<<endl;
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    //dukaan.initCounter();
    int x=0;
    while(x!=5)
    {
    	dukaan.setPrice();
	}
    
    //dukaan.setPrice();
    //dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

