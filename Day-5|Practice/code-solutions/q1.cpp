#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    //Fetch year.
    int year;
    cout << "Which year? ";
    cin >> year;

    //Check for leap
    string result = "Not leap year.";
    if (year % 400 == 0)
    {
        result = "Leap year!";
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        result = "Leap year!";
    }

    cout << result << endl;

    return 0;
}