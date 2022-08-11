#include <iostream>

using namespace std;
void sumAvg(int,int,int,float&,float&);
int main()
{
	float sum,average;
	
	sumAvg(10,(3+10),15,sum,average);
	cout<<"\nSum is "<< sum;
	cout<<"\nAverage is "<< average;
	return 0;
}

void sumAvg(int n1,int n2,int n3,float& sm, float& avg)
{
	sm=n1+n2+n3;
	avg=sm/3;
}
