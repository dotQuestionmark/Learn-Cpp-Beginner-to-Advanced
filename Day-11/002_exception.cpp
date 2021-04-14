#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    cin>>n1>>n2;

    try{
        if(n2==0)
        {
            throw 10.2f;
        }
        int  res = n1/n2;
        if(res<=5)
        {
            throw 11;
        }
    }
    
    catch(float f1)
    {
        cout<<"Error No "<<f1<<" has occured";
    }
    catch(int)
    {
        cout<<"Your result is less than 5 try again";
    }
    catch(...)
    {
        cout<<"Catching all the exceptions";
    }
    

    cout<<"Byeee...";

    return 0;
}