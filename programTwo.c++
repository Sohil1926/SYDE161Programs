#include <iostream>
using namespace std;

int main() {
    string instructorName, myName, food, adjective, color, animal;
    int randomNumber;

    cout << "First or last name of your instructor: ";
    cin >> instructorName;

    cout << "Your name: ";
    cin >> myName;

    cout << "A food: ";
    cin >> food;

    while (true) {
        cout << "A number between 100 and 120: ";
        cin >> randomNumber;

        if (randomNumber >= 100 && randomNumber <= 120) {
            break;
        }
        cout << "Please input a number between 100 and 120: " << endl;
    }

    cout << "An adjective: ";
    cin >> adjective;

    cout << "A color: ";
    cin >> color;

    cout << "An animal: ";
    cin >> animal;

    cout << "Dear Instructor " + instructorName + ",\n\n";
    cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " + food + ", which made me turn " + color + " and extremely ill. I came down with a fever of " << randomNumber << ". Next, my " + adjective + " pet " + animal + " must have smelled the remains of the " + food + " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late.\n\n";
    cout << "Sincerely,\n\n";
    cout << myName;

    return 0;
}
