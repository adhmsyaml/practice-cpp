#include <iostream.h>
#include <ctype.h>

using namespace std;

void inputData(int &, double &, char &, char &);
double calcBasicCharge(double &);
double calAddService(char &);
void displayReceipt(int &, double &, char &, double &);

int main()

{
	int customerID, count = 0;
	double weight, totalprice, collection;
	char custStatus, addService, type, continuecust = 'y';

	while (toupper(continuecust) == 'Y')
	{

		inputData(customerID, weight, custStatus, addService);

		if (toupper(custStatus) == 'R')

			totalprice = calcBasicCharge(weight) + calAddService(addService) - 1;

		if (toupper(custStatus) == 'W')

			totalprice = calcBasicCharge(weight) + calAddService(addService);

		displayReceipt(customerID, weight, addService, totalprice);

		count++;
		collection = collection + totalprice;

		cout << " \nMore customer? y - Yes, n - No " << endl;
		cin >> continuecust;
	}

	cout << "Count of customer = " << count << endl;
	cout << "Total collection = RM " << collection << endl;
}

void inputData(int &customerID, double &weight, char &custStatus, char &addService)

{
	cout << "Enter Customer ID = ";
	cin >> customerID;
	cout << "Customer Status ( R - Regular, W - New ) = ";
	cin >> custStatus;
	cout << "Enter Weight of Fabric = ";
	cin >> weight;
	cout << "Additional Service:\na) No additional service\nb) Fabric collection service only - extra charge RM 3.00\nc) Fabric delivery service only - extra charge RM 3.00\nd) Fabric collection and delivery service - extra charge RM 6.00";
	cout << "\nAdditional Service No? ";
	cin >> addService;
}

double calcBasicCharge(double &weight)

{
	double basicCharge;

	if (weight <= 4)
		basicCharge = weight * 2;

	if (weight > 4)
		basicCharge = ((weight - 4) * 1.5) + (4 * 2);

	return basicCharge;
}

double calAddService(char &addService) //function definition
{
	double price;
	if (toupper(addService) == 'A') //no service
		price = 0.0;
	else if (toupper(addService) == 'B') // fabric collection
		price = 3.0;
	else if (toupper(addService) == 'C') //fabric delivery
		price = 3.0;
	else
		price = 6.0; // fabric collection and delivery

	return price;
}

void displayReceipt(int &customerID, double &weight, char &addService, double &totalprice)

{
	cout << "\nRotan Tunggal Fabric Folding Service";
	cout << "\n--------------------------------------------------------------------" << endl;
	cout << "\nCustomer ID = " << customerID << endl;
	cout << "Fabric weight = " << weight << endl;
	cout << "Additional Service = " << addService << endl;
	cout << "Total payment = RM " << totalprice << endl;
	cout << "\n***THANK YOU***";
	cout << "\n--------------------------------------------------------------------";
}
