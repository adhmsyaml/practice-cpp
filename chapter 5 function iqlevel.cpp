#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
char findIQLevel(double);
int main()
{
    double iqScore;
    char iqLevel[15];
    cout << "Please enter the IQ score: ";
    cin >> iqScore;
    cout << "This is your IQ level: " << findIQLevel(iqScore);
    return 0;
}
char findIQLevel(double iqscore)
{
    char iqlevel[15];
    if (iqscore < 20)
        strcpy(iqlevel, "Slow");

    else if (iqscore < 141)
        strcpy(iqlevel, "Normal");

    else if (iqscore < 211)
        strcpy(iqlevel, "Intelligent");

    else if (iqscore > 210)
        strcpy(iqlevel, "Genius");

    return iqlevel[15];
}
