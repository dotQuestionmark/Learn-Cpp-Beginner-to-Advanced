#include <bits/stdc++.h>

using namespace std;

void fun(int n)
{
    cout << n*5 <<endl;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // We have to multiply every element of array by 5 and print it.

    for_each(arr, arr+3, fun);

    return 0;
}