#include <iostream>

using namespace std;

int main()
{
    // <dataType> arrayName [ARRAY_SIZE];

    int arr[5];
    // 0 1 2 3 4

    arr[0] = 15;
    arr[1] = 16;
    arr[2] = 17;
    arr[3] = 18;
    arr[4] = 19;

    int a = 5;

    int arr1[5] = {15, 16, 17, 18, 19};

    int arr2[5] = {15, 16, 17};

    int arr3[5] = {};

    int arr4[6] = {15, 16, 17, 18, 19, 20};

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=0; i<5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for(int i=0; i<5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout<<"Enter 5 values for array: ";
    for(int i=0; i<5; i++)
    {
        cin >> arr3[i];
    }

    for(int i=0; i<5; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}