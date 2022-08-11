#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int i = 1, N;
	float num, result = 0, sum;
	
	cout << "How many numbers?: ";
	cin >> N;
	
	while (i <= N)
	{
		cout << "Number: ";
		cin >> num;
		
		result = pow(num,2);
		
		sum += result;
		i++;
	}
	
	cout << sum;
return 0;
}
