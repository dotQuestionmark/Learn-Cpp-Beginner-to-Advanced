#include <iostream>

using namespace std;

int* allocate_array(int n)
{
    int *p = new int[5];
    for(int i=0; i<n; i++)
    {
        p[i] = 0;
    }

    return p;
}

int main()
{
    int n;
    cin>>n;

    int *ptr = allocate_array(n);
}