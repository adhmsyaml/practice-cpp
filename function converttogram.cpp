#include<iostream>
using namespace std;

float ConvertToGrams(float,float &);

int main()
{
	float pounds,ounces;
	cout << "Enter the pounds: ";
	cin >> pounds;
	cout << "Enter the ounces: ";
	cin >> ounces;
	
	cout << "The pounds in gram is " << ConvertToGrams(pounds,ounces);
	cout << "\nThe ounces in gram is " << ounces;
}
float ConvertToGrams(float pound,float &ounce)
{
	float poundToGram;
	ounce= (ounce/16)*453.592;
	poundToGram=pound*453.592;
	return poundToGram;

	

}
