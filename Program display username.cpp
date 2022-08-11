// Accepts the user's first and last name and print them //

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	//declare the input variable//
	char nameFirst[20], nameLast[20];
	
	//ask user to enter their name
	cout<< "\n\nType your first and last name below: "<< nameFirst<<endl;
	
	// prompt the user to put their first name//
	cout<<"\n\tFirst Name:\t";
	// the user's first name stored in the nameFirst variable//
	cin.getline(nameFirst,20);
	
	// prompt the user to their last name//
	cout<<"\n\tLast Name:\t";
	// the user's last name stored in the nameLast variable//
	cin.getline(nameLast,20);
	
	// print the username
	cout<< "\n\n\nThis Is Your Name:\a\t"<<nameFirst<<" "<<nameLast<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	
	return 0;
}
