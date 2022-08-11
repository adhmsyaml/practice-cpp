#include <iostream>

using namespace std;

double calcSum();

int main()
{
	cout << "The sum value of 6 numbers is "<< calcSum();
}
double calcSum()
{
	double sum=0, num;
	for(int i=0;i<6;i++)
	{
		cout << "Enter the number: ";
		cin >> num;
		sum += num;
	}
	return sum;
}
