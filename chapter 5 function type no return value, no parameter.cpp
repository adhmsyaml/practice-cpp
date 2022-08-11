#include <iostream>

using namespace std;

void calcSum();
int main()
{
	calcSum();
	
	
	return 0;
}

void calcSum()
{
	double sum=0, num;
	for(int i=0;i<6;i++)
	{
		cout << "Enter the number: ";
		cin >> num;
		sum += num;
	}
	cout << "The sum value of 6 numbers is "<< sum;
}
