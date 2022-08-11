#iclude <iostream>

using namespace std;

int main ()
{
	int sumStud, sumAll = 0, mark, studID;
	float avgMark;
	int stud
	int subject = 1;
	
	for(stud = 1;stud <= 3;stud++)
	{
		sumStud = 0;
		cout << "Enter student ID: ";
		cin >> studID;
		while (subject <= 4)
		{
			cout << "Enter mark: ";
			cin >> mark;
			sumStud += mark;
			subject++;
		}
		sumAll += sumStud;
	}
	avgMark = sumAll /3;
	cout << "\n"
}
