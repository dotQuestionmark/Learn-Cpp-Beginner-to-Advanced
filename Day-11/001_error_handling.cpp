#include <iostream>

using namespace std;

int division(int a, int b) throw(int)
{
    if(b==0)
    {
        throw 404;
    }
    return  a/b;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;

    try{
        int result = division(n1, n2);
        cout<<result;
    }
    catch(int n){
        cout<<"Error occured Error Numr"<<n;
    }

    cout<<"Hello";

    return 0;
}