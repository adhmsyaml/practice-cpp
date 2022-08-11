#include <iostream>

using namespace std;

double calcSum(int);
int main()
{
	int i;
	cout << "How many numbers you want to sum: ";
	cin >> i;
	cout << "The sum value of those numbers is "<< 	calcSum(i);
	
	
	return 0;
}

double calcSum(int counter)
{
	double sum=0, num;
	for(int i=0;i<counter;i++)
	{
		cout << "Enter the number: ";
		cin >> num;
		sum += num;
	}
	return sum;
}
