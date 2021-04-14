// Array of positive numbers
// [5, 7, 1, 9, 5, 2, 4]
// O(n)
// Find smallest positive number missing

#include <bits/stdc++.h>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // [5, 7, 1, 9, 5, 2, 4]

    int testArr[INT_FAST16_MAX] = { };

    for(int i=0; i<n; i++)
    {
        testArr[ arr[i] ]++;
    }

    for(int i=1; i<n; i++)
    {
        if(testArr[i] == 0)
        {
            cout<<i<<" is the smallest positive missing number";
            return 0;
        }
    }

    return 0;
}