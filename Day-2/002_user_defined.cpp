#include <iostream>

using namespace std;

typedef int rollNo;
typedef int id;

enum WorkingDays {mon=1, tue, fri=5, sat, sun};

int main()
{
    rollNo r1 = 1;
    rollNo r2 = 2;
    rollNo r3 = 3;

    id id1 = 100001;
    id id2 = 100002;
    id id3 = 100003;

    cout<<WorkingDays::mon << endl;
    cout<<WorkingDays::tue << endl;
    cout<<WorkingDays::fri << endl;
    cout<<WorkingDays::sat << endl;
    cout<<WorkingDays::sun << endl;

    return 0;
}