// Given a number, find its reverse.
#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    //Fetch a number;
    int n, rev_n = 0;
    cout << "Number plis: ";
    cin >> n;

    //
    while (n > 0)
    {
        int r = n % 10;         // Extracts the last digit.
        rev_n = rev_n * 10 + r; // Append it to reverse.
        n = n / 10;             // Can be written as n/=10, this deletes the last digit.
    }

    cout << "Reversed: " << rev_n << endl;

    return 0;
}