#include <iostream>

using namespace std;

void swap_by_value(int n1, int n2)
{
    cout<< "From Function before : " <<n1 << " " << n2 <<endl;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout<< "From Function after : " <<n1 << " " << n2 <<endl;
}

void swap_by_refrence(int &n1, int &n2)
{
    cout<< "From Function before : " <<n1 << " " << n2 <<endl;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout<< "From Function after : " <<n1 << " " << n2 <<endl;
}

void swap_by_address(int *n1, int *n2)
{
    cout<< "From Function before : " <<*n1 << " " << *n2 <<endl;
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    cout<< "From Function after : " <<*n1 << " " << *n2 <<endl;
}

int main()
{
    int a, b;
    a = 2, b =3;

    cout<< "From Main before : " <<a << " " << b <<endl;
    swap_by_value(a, b);
    cout<< "From Main after : " <<a << " " << b <<endl;

    cout<<endl<<endl;

    cout<< "From Main before : " <<a << " " << b <<endl;
    swap_by_refrence(a, b);
    cout<< "From Main after : " <<a << " " << b <<endl;
 
    cout<<endl<<endl;

    cout<< "From Main before : " <<a << " " << b <<endl;
    swap_by_address(&a, &b);
    cout<< "From Main after : " <<a << " " << b <<endl;

    cout<<endl<<endl;

    return 0;
}