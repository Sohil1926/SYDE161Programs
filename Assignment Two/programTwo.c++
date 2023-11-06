#include <iostream>
#include <string>
#include <stdexcept> 
using namespace std;

// conversion rate to meters for a given unit
float getConversionRateToMeters(const string& unit) {
    if (unit == "cm") return 0.01f;
    if (unit == "meter") return 1.0f;
    if (unit == "inch") return 0.0254f;
    if (unit == "foot") return 0.3048f;
    throw invalid_argument("Entered unit is not valid.");
}

// convert length to meters
float toMeters(float length, const string& currentUnit) {
    return length * getConversionRateToMeters(currentUnit);
}

// convert  meters to target unit
float fromMeters(float length, const string& targetUnit) {
    return length / getConversionRateToMeters(targetUnit);
}

// main conversion functino
float convertLength(float length, const string& currentUnit, const string& targetUnit) {
    float lengthInMeters = toMeters(length, currentUnit);
    return fromMeters(lengthInMeters, targetUnit);
}

int main() {
    float length;
    string currentUnit, targetUnit;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter current unit: ";
    cin >> currentUnit;
    cout << "Enter target unit: ";
    cin >> targetUnit;

    try {
        float convertedLength = convertLength(length, currentUnit, targetUnit);
        //format to 3 decimal places
        cout.precision(3);
        cout.setf(ios::fixed);
        cout << "New converted length in " << targetUnit << ": " << convertedLength << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
