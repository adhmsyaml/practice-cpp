#include <iostream>

using namespace std;

int main()
{
	int number, counter = 1, largest, totalNumber;
	
	cout << "How many numbers? ";
	cin >> totalNumber;
	
	cout << "Enter any number ";
	cin >> number;
	
	largest = number;
	
	while (counter < totalNumber)
	{
		counter++;
		cout << "Enter any number ";
		cin >> number;
			if (number > largest)
				largest = number;
				
	}
	cout << "\n The largest numbers is " << largest;
return 0;

}
