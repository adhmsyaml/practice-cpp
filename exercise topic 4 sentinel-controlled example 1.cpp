#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
	char password[10];
	cout << "\nEnter your password: ";
	cin.getline(password,10);
	
	while (strcmp(password,"lapan")!=0)
	{
		cout << "\nIncorrect password, please try again";
		cout << "\nEnter your password number: ";
		cin.getline(password,10);
	}
	cout << "\nWelcome";
return 0;
}
