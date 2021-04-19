#include <iostream>

using namespace std;

typedef long long int ll;
int main(void)
{
    // Number, is it perfect?
    // if sum of all the factors of num = num, then it's perf.

    ll num, sumOfFactors = 0;
    // cout << "Drop a number: " << endl;
    // cin >> num;

    //logic.
    for (int i = 1; i <= 100; i++)
    {
        sumOfFactors = 0;
        for (int f = 1; f < 10; f++)
        {
            if (i % f == 0)
            {
                sumOfFactors += f;
            }
        }
        if (sumOfFactors == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}