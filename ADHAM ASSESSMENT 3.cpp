//preprocessor
#include<iostream>
#include<ctype.h>

using namespace std;

//functions prototype
void inputData(int&, char&, float&, int&);
float calcBasicCharge(float);
float calcAddService(int);
void displayReceipt(int, float, int, float);
int main()
{
	// Declare variables
	int customerID, additionalServiceNumber, numberOfCustomers = 0;
	char continueTheLoop = 'Y', customerStatus;
	float weightOfFabric_KG, basicCharge, additionalServiceCharge, totalChargeForEachCustomer, totalChargeForAllCustomers = 0;
	
	// Loop
	// Will stop when the user doesn't want to continnue(press n key)
	while (toupper(continueTheLoop) == 'Y')
	{
		/* inputData() function call-prompt user to input required data*/
		inputData(customerID, customerStatus, weightOfFabric_KG, additionalServiceNumber);
		/* assign basicCharge by the value from calcBasicCharge() functions value*/
		basicCharge = calcBasicCharge(weightOfFabric_KG); 
		/* assign additionalServiceCharge by calcAddService() functions value*/
		additionalServiceCharge = calcAddService(additionalServiceNumber);
		/* find the total charge for the current user*/
		totalChargeForEachCustomer = basicCharge + additionalServiceCharge;
		
		/* check if the user is regular user or not, and subtract the payment they had to make by one if they are regular customer*/
		if (toupper(customerStatus) == 'R')
				totalChargeForEachCustomer -= 1;
	
		/*call the displayReceipt() function to display the user's data*/
		displayReceipt(customerID, weightOfFabric_KG, additionalServiceNumber, totalChargeForEachCustomer);
		/*update numberOfCustomers so to count the total of users*/
		numberOfCustomers += 1;
		/*update totalChargeFoaAllCustomers to count the total of collection*/
		totalChargeForAllCustomers += totalChargeForEachCustomer;
		
		/*update the loop variable*/
		cout << "\nMore customer(y-yes, n-no): ";
		cin >> continueTheLoop;
	}
	/*after the loop stop*/
	cout << "Total of Customers: " << numberOfCustomers << endl;/* display the total customers*/
	cout << "Total Collection: RM " << totalChargeForAllCustomers;/* and total collection*/
return 0;
}

/* Function headers*/
/* this function will prompt the user to input all the required data*/
void inputData(int& customerID, char& customerStatus, float& weightOfFabric_KG, int& additionalServiceNumber)
{
	/*ask for customer's ID*/
	cout  << "\n\nEnter Customer ID: ";
	cin >> customerID;
	
	/*ask for customer status(regular or new)*/
	cout << "Enter Customer Status (R-regular,W-new): ";
	cin >> customerStatus;
	
	/*ask for the weight of fabric in kilogram*/
	cout << "Enter Weight of Fabric (KG): ";
	cin >> weightOfFabric_KG;
	
	/*display all the additional service and ask which additional service they want*/
	cout << "\nAdditional service: ";
	cout << "\n1)\tNo additional service";
	cout << "\n2)\tFabric collection service only - extra charge RM 3.00";
	cout << "\n3)\tFabric delivery service only - extra charge RM 3.00";
	cout << "\n4)\tFabric collection and delivery service - extra charge RM 6.00";
	cout << "\nAdditional service number? : ";
	cin >> additionalServiceNumber;
}

/* this function will calculate the basic charge which is not include the additional service charge*/
float calcBasicCharge(float weightOfFabric_KG)
{
	float basicCharge;/*declare variable*/
	/* check if the weight of fabric is under 4kg*/
	if (weightOfFabric_KG >= 0 && weightOfFabric_KG <= 4)
		basicCharge = weightOfFabric_KG * 2;
		
	else
	{
		basicCharge = 8 + (weightOfFabric_KG - 4) * 1.5;
	}
	
return basicCharge;/* return the value to main()*/
}

/*this function will calculate the additional service charge*/
float calcAddService(int additionalServiceNumber)
{
	float additionalServiceCharge;/*declare variable*/
	
	/*check the number of additional service choosen by user as different service have different charge*/
	if (additionalServiceNumber == 1)
		additionalServiceCharge = 0;
	
	else if (additionalServiceNumber == 2)
		additionalServiceCharge = 3;
		
	else if (additionalServiceNumber == 3)
		additionalServiceCharge = 3;
	
	else if (additionalServiceNumber == 4)
		additionalServiceCharge = 6;
	
return additionalServiceCharge; /*return value to main()*/
}

/*this function will display data that the current user has input earlier*/
void displayReceipt(int customerID, float weightOfFabric_KG, int additionalServiceNumber, float totalChargeForEachCustomer)
{
	cout << "\n\nRotan Tunggal Fabric Folding Service" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "\nCustomer ID: " << customerID;
	cout << "\nFabric Weight: " << weightOfFabric_KG << " kg";
	
	/*display the additional service name by the additional service number choosen by the user*/
	if (additionalServiceNumber == 1)
		cout << "\nAdditional Service: 1)\tNo additional service";
	else if (additionalServiceNumber == 2)
		cout << "\nAdditional Service: 2)\tFabric collection service only";
	else if (additionalServiceNumber == 3)
		cout << "\nAdditional Service: 3)\tFabric delivery service only";
	else if (additionalServiceNumber == 4)
		cout << "\nAdditional Service: 4)\tFabric collection and delivery service";
	cout << "\nTotal Payment: RM " << totalChargeForEachCustomer << endl;
	cout << "\n***THANK YOU***" << endl;
	cout << "------------------------------------------------------------" << endl;
}
