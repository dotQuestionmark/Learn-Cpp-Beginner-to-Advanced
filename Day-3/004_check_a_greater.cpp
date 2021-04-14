#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 7;
    int c = 2;

    if ( a>c, a>b )
    // true , false - > false
    {
        cout << "Hello";
    }
    else
    {
        cout << "Bye";
    }

    return 0;
}