// Calculate the area of a square and the shaded region

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const float PI = 3.142;  //declare input and output variable
	float widthS,heightS;
	float areaS;
	float r;
	float areaC;
	float areaSR;
	
	// prompt the user to put the width and height of the square
	cout<<"\n\n\tEnter the width of the square (cm):\t";
	cin>>widthS;
	cout<<"\n\tEnter height of the square (cm):\t";
	cin>>heightS;
	
	// formula to get the area of square
	areaS = widthS*heightS;
	// the radius of one of four circles
	r = heightS/4;
	// formula to get the area of one circle from the four circles
	areaC=PI*pow(r,2);
	/* formula to get the area of shaded region using the area of the 
	square and the area of all four circles*/
	areaSR=areaS-(areaC*4);
	
	// display the area of the square and the area of the shaded region
	cout<<"\n\n\n\tArea of the square:\t\t\t"<<areaS<<" cm"<<endl;
	cout<<"\n\tArea of the shaded region:\t\t"<<areaSR<<" cm"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	
	
	return 0;
}
