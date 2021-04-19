// Autobots Importing libraries.
#include <iostream>

// Declare the namespace to use.
using namespace std;

int main(void){

    int a,b,c, max;
    a=5; b=2; c=3;

    // if(a>b){
    //     max=a;
    // } else {
    //     max=b;
    // } 

    if(a>b){
        if(a>c)
            max=a;
        else
            max=b;
    } else{
        if(b>c)
            max=b;
        else
            max=c;
    }

    //Ternary Operator
    // <variable-to-be-stored> = (condition) ?<true-block> :<false-block>
    max = (a>b) ?a :b;

    cout << "Max number: " << max << endl;

    return 0;
}