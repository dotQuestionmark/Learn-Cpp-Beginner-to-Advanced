#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    // Fetch array size.
    int n;
    cout << "Number of elements? ";
    cin >> n;

    // Fetch array values.
    int arr[n];
    cout << "Drop all values, in space separated format! " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0 && arr[i] > 0)
        {

            cout << arr[i] << " | index: " << i << endl;
            break;
        }

    return 0;
}