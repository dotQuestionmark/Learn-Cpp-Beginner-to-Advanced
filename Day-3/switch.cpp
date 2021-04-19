/*
 * 0-woah!
 * 1-pirate.
 * 2-Oh, simple hooman.
 * 3-Alien.
 * 4-Out of syllabus.
 * 5-oh please. 
*/

// Autobots Importing libraries.
#include <iostream>

// Declare the namespace to use.
using namespace std;

int main(void){

    // int eyes;
    // cout << "How many eye you gotcha? ";
    // cin >> eyes;

    // Escape Sequence \n, \t, \v, \a
    // if(eyes==0){
    //     cout << "woah!\n\a"; 
    // } else if(eyes==1) {
    //     cout << "pirate\n";
    // } else {
    //     cout << "Okay, bubuye";
    // }

    int a=5, b=10;
    if(a=b, a==b){
        cout << "Cool!" << endl;
    }
    
    char name;
    cout << "What's you char? ";
    cin >> name;
// FLoating point
    switch(name){ //value to be checked.

        // Fall Through.
        case 'A':
            cout << "Woah!" << endl;
            /*
            ....
            */
            break;

        // ASCII 
        case 66: 
            cout << "Pirate!" << endl;
            break;

        default:
            cout << "Out of syllabus.";
    }

    return 0;
}
