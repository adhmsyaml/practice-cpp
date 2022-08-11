//display the positive number intered

#include <iostream>

using namespace std;

int main ()
{
	int number;
	
	cout << "Enter an integer number: ";
	cin >> number;
	
	if (number > 0);
	{
		cout << "You have entered a positive number: " << number << endl;
	}
	
	cout << "This statement is always executed";
	
	return 0;
}
