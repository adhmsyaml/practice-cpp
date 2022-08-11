#include <iostream>

using namespace std;
double average3(double,double,double);

int main()
{
	double a,b,c,average;
	cout << "The average of 50, 100 and 120 is ";
	cout << average3(50,100,120) << endl;
	
	cout << "Enter three numbers: "<<endl;
	cin >> a >> b >> c;
	

	average = average3(a,b,c);
	
	cout << "The average is: "<< average;
	return 0;
}
double average3(int num1, double num2, double num3)
{
	double avg;
	avg=(num1+num2+num3)/3;
	return avg;
}
