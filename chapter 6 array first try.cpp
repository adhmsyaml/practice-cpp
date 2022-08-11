#include <iostream>

using namespace std;

int main()
{
	double sales[10];
	int index;
	double max,sum,average;
	
	//Initialiazing an array:
	for (index = 0; index < 10; index++)
		sales[index] = 0.0;
		
	//Reading data into an array:
	for (index = 0; index < 10; index++)
	{
		cout << "Please enter sales amount: ";
		cin >> sales[index];
	}
		
		
	//Printing an array:
	for (index = 0; index < 10; index++)
		cout << sales[index] << " ";
		
	//Finding the sum and average of an array:
	sum = 0;
	for (index = 0; index < 10; index++)
		sum = sum + sales[index];
		
	average = sum / 10;
	
	//Largest element in the array:
	max=sales[0];
	for (index = 0;index<10;index++)
	{
		if(sales[index]>max)
		{
			max = sales[index];
			
		}

	}
	cout << "\n" << max;
return 0;
}

