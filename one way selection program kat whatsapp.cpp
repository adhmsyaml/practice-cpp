#include <iostream>

using namespace std;

int main ()
{
	int firstNumber;
	int secondNumber;
	
	cout << "Enter the first number: ";
	cin >> firstNumber;
	cout << "Enter the second number: ";
	cin >> secondNumber;

	
	if (firstNumber > secondNumber)
	{
		cout << firstNumber << " is the larger number" << endl;
	}
	else
	{
		cout << secondNumber << " is the larger number" << endl;
	}
	return 0;
}
