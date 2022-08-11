#include <iostream>

using namespace std;

int main()
{
	double numbers[5];
	int index,indexOfMax;
	double max;
	
	//Initialiazing an array:
	for (index = 0; index < 5; index++)
		numbers[index] = 0.0;
		
	//Reading data into an array:
	for (index = 0; index < 5; index++)
	{
		cout << "Please enter sales amount: ";
		cin >> numbers[index];
	}
		
	//Largest element in the array:
	max=numbers[0];
	for (index = 0;index<5;index++)
	{
		if(numbers[index]>max)
		{
			max = numbers[index];
			indexOfMax = index;
		}

	}
	cout << "\nThe largest number is " << max << " and its index number is " << indexOfMax;
return 0;
}
