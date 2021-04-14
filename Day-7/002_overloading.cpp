#include <iostream>

using namespace std;

void add(int n1, int n2)
{
    cout << n1+n2 << endl;

    return;
}

void add(int n1, int n2, int n3)
{
    cout << n1+n2+n3 << endl;

    return;
}

void add(int n1, int n2, int n3, int n4)
{
    cout << n1+n2+n4+n4 <<endl;
}

int main()
{
    int a = 3;
    int b = 4;
    int c = 5;

    add(a, b);

    cout << endl;

    add(a, b, c);

    return 0;
}