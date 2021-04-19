#include <iostream>

using namespace std;

void fun(){
    cout<<"Calling from std";
}

namespace fun1{
    void fun()
    {
        cout<<"Hello";
    }
}

namespace fun2{
    void fun()
    {
        cout<<"Hi";
    }
}

int main()
{
    cout<<"Hello World"<<endl;

    fun();

    fun1::fun();

    fun2::fun();

    return 0;
}