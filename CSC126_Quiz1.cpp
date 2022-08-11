//display the total of charges for RM 0.75/km


#include <iostream>

using namespace std;

int main ()
{
	//declare variable
	float kilometer;
	float charges;
	
	//prompt the user to enter the distance in km
	cout << "\n\n\tEnter the distance in kilometer: ";
	cin >> kilometer; //the value entered by the user will be stored in variable kilometer
	
	charges = kilometer*0.75; //calculate the charges for RM 0.75/km
	
	cout << "\a\n\tTotal charges: RM " << charges << endl; // display the total of charges
	
	return 0;
}
