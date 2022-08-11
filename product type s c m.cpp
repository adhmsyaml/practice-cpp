
#include <iostream>
#include <math.h>
using namespace std;


int main ()
{
char productType;
float price;
float priceAfterDiscount;
float discount;

cout << "Enter the price (RM): ";
cin >> price;
cout << "Enter the product type (S/C/M): ";
cin >> productType;

if (productType == 'S')
{
	discount = 30;
	priceAfterDiscount = price*(discount/100);
	cout << "Price after discount: RM " << priceAfterDiscount << endl;
}
else if (productType == 'C')
{
	discount = 10;
	priceAfterDiscount = price*(discount/100);
	cout << "Price after discount: RM " << priceAfterDiscount << endl;
}
else if (productType == 'M')
{
	discount = 40;
	priceAfterDiscount = price*(discount/100);
	cout << "Price after discount: RM " << priceAfterDiscount << endl;
}
else
{
	discount = 0;
	cout << "Invalid product type" << endl;
}


return 0;
}

