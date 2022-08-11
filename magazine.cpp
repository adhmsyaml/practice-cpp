#include <iostream>
using namespace std;
int main ()
{
	int quantityOf_magazine;
	float priceOfa_magazine;
	float totalPrice;
	char S;
	cout << S << endl;
	cout << "Enter the quantity of the magazine: " ;
	cin >> quantityOf_magazine;
	
	if ( quantityOf_magazine > 50 )
	{
		priceOfa_magazine = 12.50;
	}
	else
	{
		priceOfa_magazine = 18.90;
	}
	totalPrice = quantityOf_magazine*priceOfa_magazine;
	cout << "The total price of the magazines: RM " << totalPrice << endl;
	return 0;
}

