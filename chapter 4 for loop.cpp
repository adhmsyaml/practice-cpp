#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	char gender;
	int countFemale = 0;
	
	for (int count = 0; count < 10; count++)
	{
		cout << "\nEnter gender (F-female, M-male): ";
		cin >> gender;
		if (toupper (gender) == 'F')
				countFemale++;
	}
	cout << "\n The number of female students are: " << countFemale;
return 0;
}
