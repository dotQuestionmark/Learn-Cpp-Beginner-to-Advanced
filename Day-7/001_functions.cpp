#include <iostream>

using namespace std;

int printResult(int n1, int n2)
{
    return ((((n1 + n2)/2)*57) + 12);
}

int main(void)
{
    int a, b;
    cin >> a >> b;

    int result1 = printResult(a, b);

    int c, d;
    cin >> c >> d;

    printResult(c, d);

    return 0;
}