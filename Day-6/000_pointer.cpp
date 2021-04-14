#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    
    a = 10;
    b = 11;
    c = 12;

    int *ptr;
    ptr = new int[5];

    cout<<ptr;
    delete(ptr);

    cout << a << " " << b << " " << c <<" " << endl;

    return 0;
}