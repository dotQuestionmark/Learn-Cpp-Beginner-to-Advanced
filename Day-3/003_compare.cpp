#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout<<"Enter two values: ";
    cin>>a>>b;

    if(a > b)
    {
        cout << "Greater";
    }
    else if ( a == b)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Lesser";
    }

    return 0;
}