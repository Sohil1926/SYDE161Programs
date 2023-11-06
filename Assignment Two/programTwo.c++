#include <iostream>
#include <string>
#include <stdexcept> // For std::invalid_argument

// Bring everything from the std namespace into the current namespace
using namespace std;

// Helper function to get the conversion rate to meters for a given unit
float getConversionRateToMeters(const string& unit) {
    if (unit == "cm") return 0.01f;
    if (unit == "meter") return 1.0f;
    if (unit == "inch") return 0.0254f;
    if (unit == "foot") return 0.3048f;
    throw invalid_argument("Invalid unit");
}

// Helper function to convert any length to meters
float toMeters(float length, const string& fromUnit) {
    return length * getConversionRateToMeters(fromUnit);
}

// Helper function to convert from meters to the target unit
float fromMeters(float length, const string& toUnit) {
    return length / getConversionRateToMeters(toUnit);
}

// Main conversion function
float convertLength(float length, const string& fromUnit, const string& toUnit) {
    float lengthInMeters = toMeters(length, fromUnit);
    return fromMeters(lengthInMeters, toUnit);
}

int main() {
    float length;
    string fromUnit, toUnit;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter current unit: ";
    cin >> fromUnit;
    cout << "Enter target unit: ";
    cin >> toUnit;

    try {
        float convertedLength = convertLength(length, fromUnit, toUnit);
        // Set precision for the output to 3 decimal places
        cout.precision(3);
        cout.setf(ios::fixed);
        cout << "New converted length in " << toUnit << ": " << convertedLength << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
