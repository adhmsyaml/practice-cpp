#include <iostream>

using namespace std;

int funcX(int &);
void funcY(int &);

int main()
{
	int no=10,b;
	
	b=funcX(no);
	
	cout<<no<<" "<<b;
	return 0;
}

int funcX(int &no)
{
	funcY(no);
	return no;
}

void funcY(int &no)
{
	no=100;
}
