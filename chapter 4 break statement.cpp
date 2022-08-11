#include <iostream>

using namespace std;

int main ()
{
	int x = 1;
	while (x <= 10)
	{
		if (x==4)
		{
			//x++;
			continue;
		}
		cout << "\n" << x;
		x++;
	}
	cout << "\nThe loop terminated at x = " << x;
}
