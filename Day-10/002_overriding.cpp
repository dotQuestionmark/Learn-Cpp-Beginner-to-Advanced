#include <iostream>

using namespace std;

class Phone
{
    public:
        virtual void call()
        {
            cout<<"Phone is calling"<<endl;
        }
        void message()
        {
            cout<<"Message from phone"<<endl;
        }
};

class SmartPhone: public Phone
{
    public:
        void call()
        {
            cout<<"Phone is calling and it is vibrating as well"<<endl;
        }
        void camera()
        {
            cout<<"Phone's camera"<<endl;
        }
        void sm()
        {
            cout<<"sm"<<endl;
        }
};

int main()
{
    Phone p1;
    SmartPhone s1;
    s1.call();

    Phone *phone_pointer;
    phone_pointer = new SmartPhone();
    phone_pointer->call();

    return 0;
}