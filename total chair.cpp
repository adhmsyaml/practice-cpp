#include <iostream>

using namespace std;
int main ()
{
	int buyChair;
	float priceOfChair;
	
	cout << "Amount of chair you buy: "; // ask user to put the amount of chair
	cin >> buyChair;
	
	/* if the amount of chair the user buy is more than or equal to 24, the
	price of each chair is RM 10.50 */
	if (buyChair >= 25)
	{
		priceOfChair = buyChair * 10.50;
	//	cout << "RM "<< priceOfChair << endl;
		cout << "You get the discount" << endl;
	}
	// if less than or equal to 23, the price of each chair is RM 13.00
	else
	{
		priceOfChair = buyChair * 13.00;
	 //   cout << "RM "<< priceOfChair<< endl;
	}
    cout << "RM "<< priceOfChair<< endl;
    cout << "Have a nice day!";
	return 0;
}

