// *
// * *
// * * *
// * * * *
// * * * * *

// Ask the user how much lines to print ? -> 2

#include <iostream>

using namespace std;

int main()
{
    int numberOfLines;
    cin>>numberOfLines;

    for(int i=0; i<numberOfLines; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }

    return 0;
}
