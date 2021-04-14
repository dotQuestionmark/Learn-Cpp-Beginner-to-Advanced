#include <iostream>

using namespace std;

int x = 13;

int main()
{
    int x = 31;
    cout<<x<<endl;

    {
        int x = 14;
        cout<<x<<endl;
    }

    cout<<x<<endl;
    cout<<::x<<endl;

    return 0;
}