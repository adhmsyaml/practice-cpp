#include <iostream>

using namespace std;

int main()
{
	int num, average, sum = 0, count = 0, limit = 5;
	
	while (count < limit)
	{
		cout << "\nEnter any number ";
		cin >> num;
		sum += num;
		cout << "\ncount before increment = " << count;
		cout << "\nsum = " << sum;
		
		count++;
		cout << "\ncount after increment = " << count;
	}
	cout << "\nsum = " << sum;
	average = sum / count;
	cout << "\nAverage for sum of five integer numbers is " << average;
	
	return 0;
}
