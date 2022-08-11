#include <iostream>
using namespace std;
double calcSum(double);

int main()
{
	double num,sum;
	for(int i=0;i<6;i++)
	{
		cout << "Enter the number: ";
		sum = calcSum(num);
	}

}

double calcSum(double number)
{
	double sum;
	for(int i=0;i<6;i++)
	{
		sum += number;
		return sum;
	}
}
