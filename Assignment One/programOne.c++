#include <iostream>
using namespace std;

int main() {
    char myChar;
    cout << "Enter a character: ";
    cin >> myChar;

    cout << " " << myChar << " " << myChar << " " << myChar << "\n";
    cout << myChar << "     " << myChar << "\n";
    cout << myChar << "          +      +\n"; 
    cout << myChar << "        + + +  + + +\n"; 
    cout << myChar << "          +      +\n"; 
    cout << myChar << "     " << myChar << "\n";
    cout << " " << myChar << " " << myChar << " " << myChar << "\n";

    return 0;
}

/* 
 Z Z Z
Z     Z
Z          +      +
Z        + + +  + + + 
Z          +      + 
Z     Z
 Z Z Z 
*/