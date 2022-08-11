#include <iostream>
using namespace std;
int main()
{
	int number = 0, counter = 0, min = 100, max = 0;
	
	while (counter < 5)
	{
		cout << "\n Enter any number ";
		cin >> number;
		
		if (number < min)
			min = number;
		if (number > max)
			max = number;
		counter++;
	}
	
	cout << "\n The largest numbers is " << max;
	cout << "\n The smallest numbers is " << min;
}
