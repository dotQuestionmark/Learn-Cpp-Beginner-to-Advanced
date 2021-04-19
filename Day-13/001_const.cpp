#include <iostream>

using namespace std;

int main()
{
    int creatorId = 113;
    int ownerId = 13;

    const int *const ptr = &creatorId;

    ptr = &ownerId; // ->(1)
    // ++(*ptr); // ->(2)

    cout << *ptr << endl;

    return 0;
}