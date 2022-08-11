#include <iostream>
#include <string.h>

using namespace std;
int main ()
{
char packageCode;
char tourPackage [40];
float price;

cout << " Enter your package code (M)/(L): ";
cin >> packageCode;

if (packageCode == 'M')
{
	strcpy(tourPackage,"Full-Day Trip to Melaka");
	price = 350.00;
	cout << "\n\tTour Package: " << tourPackage << "\tPrice: RM " << price << endl;
}
else if (packageCode == 'L')
{
	strcpy(tourPackage,"Half-Day Langkawi Tour");
	price = 150.00;
	cout << "\n\tTour Package: " << tourPackage << "\tPrice: RM " << price << endl;
}
else
{
	cout << "\n\a\tSorry. Invalid input" << endl;
}
return 0;
}
