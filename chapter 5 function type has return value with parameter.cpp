#include <iostream>

using namespace std;

double calcSum(double,double,double,double,double,double);

int main()
{
	double num1,num2,num3,num4,num5,num6,sum;
	cout << "Enter six number: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
	sum = calcSum(num1,num2,num3,num4,num5,num6);
	cout << "The sum value of 6 numbers is "<< sum;
	return 0;
}

double calcSum(double num1,double num2,double num3,double num4,double num5,double num6)
{
	double sum;
	sum = num1 + num2 + num3 + num4 + num5 + num6;
	return sum;
}
