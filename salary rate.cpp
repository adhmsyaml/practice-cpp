#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float salary;
	int totalWorkingDays;
	
	cout << "\n Enter number of working days: ";
	cin >> totalWorkingDays;
	if (totalWorkingDays >= 16 && totalWorkingDays <= 28)
	{
		salary = totalWorkingDays * 45;
	}
	else
	{
		salary = totalWorkingDays * 22.5;
	}
	cout << "\n The salary is RM " << salary;
	return 0;
}
