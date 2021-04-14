#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    float arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(auto element: arr)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;
}