#include <iostream>

using namespace std;

int main(void)
{

    // Fetch 3 integers from user.
    int a, b, c;
    cout << "Drop 3 integers: " << endl;
    cin >> a >> b >> c;

    int grt = max(a, max(b,c));
    cout << "Max: " << grt << endl;

    return 0;
}