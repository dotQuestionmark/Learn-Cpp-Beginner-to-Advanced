// /     ___       __    __                          ____  ____ \
// |    /   | ____/ /___/ /_______  __________      / __ \/ __/ |
// |   / /| |/ __  / __  / ___/ _ \/ ___/ ___/_____/ / / / /_   |
// |  / ___ / /_/ / /_/ / /  /  __(__  |__  )_____/ /_/ / __/   |
// | /_/  |_\__,_/\__,_/_/   \___/____/____/      \____/_/      |
// \                                                            /
//  ------------------------------------------------------------
//         \   ^__^
//          \  (oo)\_______
//             (__)\       )\/\
//                 ||----w |
//                 ||     ||

// importing dependencies
#include <bits/stdc++.h>

// Delcare namespace
using namespace std;

int main(void)
{

    // Few variables.
    int bond = 7;
    int *ptr = &bond;

    // Let's use '&' and vibe.
    cout << "Value of bond > " << bond << endl;
    cout << "Address of var bond > " << ptr << endl;
    cout << "Value of var bond extracted via pointer > " << *ptr << endl; // * - defrence operator.

    long int arr[5] = {5, 1, 2, 3, 5};
    long int *arr_ptr; // & optional.

    cout << arr_ptr << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "Arr[" << i << "] = " << *(arr_ptr + i) << " | " << (arr_ptr + i) << endl;
    }

    cout << "Base addr -> " << arr_ptr << endl;

    return 0;
}