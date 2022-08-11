#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
	string word;
	
	cout << "\tm**d*k*\nGuess the right word: ";
	cin >> word;
	
	while (word != "merdeka")
	{
		cout << "Please try again.";
		cout << "\nGuess the right word: ";
		cin >> word;
		
	}
	cout << "Congratulations, you found the word!!";
	
return 0;
}
