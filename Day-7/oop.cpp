#include <bits/stdc++.h>

using namespace std;

//define class animal;
class animal //user defined datatype.
{
private:
    string dream;

public:
    // Define attributes.
    string name;
    float height;
    string lang;

    animal()
    { //Default
        dream = "No dream.";
        name = "human";
        height = 10000;
        lang = "Hindi";
        cout << "Animal is born." << endl;
    }

    animal(string name, float height, string lang, string dream)
    {
        this->dream = dream;
        this->name = name;
        this->height = height;
        this->lang = lang;
    }

    void plisTalk()
    {
        cout << " I speak " << this->lang << endl;
    }
};

int main(void)
{
    animal human; //Obejct of class animal; //DRY

    animal dog("Dog", 60.7, "Bhow", "Give me a bone.");
    // myAnimal.name = "Cat";
    // myAnimal.height = 20.5;
    // myAnimal.lang = "Meow";

    cout << "Hello from " << human.name << " I speak " << human.lang  << endl;
    cout << "Hello from " << dog.name << " I speak " << dog.lang << "I dream of " << dog << endl;

    human.plisTalk(); // plis dont be stuck, it sucks

    return 0;
}