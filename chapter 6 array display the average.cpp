#include <iostream>

using namespace std;

int main()
{
	double sum,average;
	int num[5] = {8,10,5,7,11},index;
	for (index=0;index<5;index++)
	{
		cout << num[index] << endl;
	}
	for (index=0;index<5;index++)
	{
		sum += num[index];
	}
	average = sum/5;
	cout << "The average of the numbers is " << average;
	
return 0;
}
