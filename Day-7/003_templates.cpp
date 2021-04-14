#include <iostream>

using namespace std;

template<class temp, class temp2>
temp2 add(temp n1, temp2 n2)
{
    return n1+n2;
}

int main()
{
    int a=3, b=4;

    float c=3.13, d=4.14;

    cout<<add(a, b)<<endl;
    cout<<add(c, d)<<endl;

    cout<<add(a, c)<<endl;
}