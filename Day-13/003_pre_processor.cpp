#include <iostream>

#include "test.h"
#include "poly.h"

#define PI 3.14

#ifndef PI
#define PI 5.12
#endif

using namespace std;

int main()
{
    cout<<PI;

    return 0;
}