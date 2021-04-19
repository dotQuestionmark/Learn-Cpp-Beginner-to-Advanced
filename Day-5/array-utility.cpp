#include <bits/stdc++.h> //Godfather

using namespace std;

int main(void)
{

    // Unknown size
    // int arr[] = {1, 2, 3, 4, 5, 65, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size << endl;

    //Fetch array from user.
    int n;
    cout << "Size of array? ";
    cin >> n;

    int arr[n]; // Declaration
    cout << "Drop all array values in space separated format." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    //Calculate sum of array.

    cout << "Sum of Array elements: " << sum << endl;

    //Cool stuff.
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}