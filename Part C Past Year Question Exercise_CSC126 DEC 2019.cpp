#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>

using namespace std;

double calCharge(char, int);
int main()
{
	int customersNumber, dataUsed, numberOfCustomerPackageB=0, numberOfCustomerPackageA=0;
	char customersName[20], packageType, customerWhoHasToPayTheHighestAmount[20];
	double charge, totalChargeForAllCustomers, highestAmount=0;
	cout << "The number of customers: ";
	cin >> customersNumber;
	for (int i=0;i<customersNumber;i++)
	{
		cout << "\nName: ";
		cin.getline(customersName,20);
		cout << "\nPackage type: ";
		cin >> packageType;
		
		if (toupper(packageType)=='B')
			numberOfCustomerPackageB++;
		else if (toupper(packageType)=='A')
			numberOfCustomerPackageA++;
		
		cout << "Data used(MB): ";
		cin >> dataUsed;
		charge = calCharge(packageType, dataUsed);
		cout << "Charge: RM" << charge;
		totalChargeForAllCustomers += charge;
		if (charge>highestAmount)
		{
			highestAmount = charge;
			strcpy(customerWhoHasToPayTheHighestAmount,customersName);
		}
	}

	cout << "The total charge for all customers: " << totalChargeForAllCustomers;
	cout << "The number of customer for package B: " << numberOfCustomerPackageB;
	cout << "The number of customer for package A: " << numberOfCustomerPackageA;
	cout << "The customer who has to pay the highest amount: " << customerWhoHasToPayTheHighestAmount;
return 0;
}

double calCharge(char packageType, int dataUsed)
{
	int internetQuota;
	double price, exceedQuotaUsageCharge = 0, charge;

	if (toupper(packageType)=='B')
	{
		internetQuota = 6000;
		price = 48;
		if (dataUsed > internetQuota)
			exceedQuotaUsageCharge = (dataUsed - internetQuota) * 0.10;
	}
	else if (toupper(packageType)=='A')
	{
		internetQuota = 10000;
		price = 88;
		if (dataUsed > internetQuota)
			exceedQuotaUsageCharge = (dataUsed - internetQuota) * 0.05;
	}
	charge = price + exceedQuotaUsageCharge;
return charge;
}
