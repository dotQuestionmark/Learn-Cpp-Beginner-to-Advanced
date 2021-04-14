#include<iostream>

using namespace std;

int add(int n1, int n2, int n3=0, int n4=0)
{
    return n1+n2+n3+n4;
}

int main()
{
    int a=2;
    int b=3;
    int c=4;
    int d=5;

    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(a, b,c,d)<<endl;
}