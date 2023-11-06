#include <iostream>
#include <vector>

using namespace std;

// Helper function to find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function to find GCD of an array of numbers
int findGCD(const vector<int>& numbers) {
    int result = numbers[0];
    for (int num : numbers) {
        result = gcd(result, num);
        
        // If the GCD is 1, no need to continue as it won't get any lower
        if (result == 1) {
            break;
        }
    }
    return result;
}

int main() {
    // Example input
int arr[] = {12, 42, 24, 27};
vector<int> inputArray(arr, arr + sizeof(arr) / sizeof(arr[0]));

    // Calculate the GCD for all elements
    int result = findGCD(inputArray);

    // Output the result
    cout << "GCD for all elements: " << result << endl;

    return 0;
}
