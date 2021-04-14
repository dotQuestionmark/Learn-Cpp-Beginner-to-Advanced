// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>

using namespace std;

int main()
{
    int numberOfLines;
    cin>>numberOfLines;

    bool one = true;

    for(int i=0; i<numberOfLines; i++)
    {
        if(i%2==false)
        {
            one = true;
        }
        else
        {
            one = false;
        }

        for(int j=0; j<=i; j++)
        {
            if(one)
            {
                cout << "1 ";
                one = false;
            }
            else
            {
                cout << "0 ";
                one = true;
            }
        }
        cout<<endl;
    }

    return 0;
}