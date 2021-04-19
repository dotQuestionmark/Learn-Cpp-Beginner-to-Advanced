#include <bits/stdc++.h>

using namespace std;

// Define a functio to make animals talk
void plisTalk(string lang[], string animal[], int index)
{
    cout << animal[index] << " says > " << lang[index] << endl;
    cout << animal[index - 1] << " says > " << lang[index - 1] << endl;
}

int main(void)
{

    string animals[] = {"Dog", "Cat", "Cow"};
    float height[] = {60.5, 30.4, 200.9};
    string lang[] = {"Bhow", "Meow", "Moooooooooo"};

    // make a cow talk;
    plisTalk(lang, animals, 2);

    return 0;
}