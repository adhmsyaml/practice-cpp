#include <iostream>

using namespace std;


double calcArea(double,double);   //function prototype

int main()
{
	double length, width, area;
	
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	
	area = calcArea(length,width); //function call
	
	cout << "The area of the rectangle is " << area;
	return 0;
}
double calcArea(double length,double width)//function header
{
	double areaOfRectangle;                //function body
	areaOfRectangle = length * width;
	return areaOfRectangle;
}
