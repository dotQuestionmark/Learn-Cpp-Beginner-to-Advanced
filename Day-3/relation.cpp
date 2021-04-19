// Autobots Importing libraries.
#include <iostream>

// Declare the namespace to use.
using namespace std;

int main(void){

    //Fetch some values from user;
    int a, b, c;
    cout << "Drop 3 numbers plissss ... " << endl;
    cin >> a >> b >> c;
    cout << "Thank you ~(^_^)~\n\n";

    //Using relational operator.
    cout << "Is a > b : " << (a>b) << endl;
    cout << "Is a < b : " << (a<b) << endl;
    cout << "Is a >= b : " << (a>=b) << endl;
    cout << "Is a <= b : " << (a<=b) << endl;
    cout << "Is a == b : " << (a==b) << endl;
    cout << "Is a != b : " << (a!=b) << endl;

    //Adding toppings. 
    cout << "Is a>b and a<c: " << (a>b || a>c) << endl;
    cout << "Is a>b and a<c: " << (a>b && a>c) << endl;

    return 0;
}