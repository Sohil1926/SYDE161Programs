#include <iostream>
#include <vector>

using namespace std;

// find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// find GCD of an array of numbers
int findGCD(const vector<int>& numbers) {
    int result = numbers[0];
    for (int num : numbers) {
        result = gcd(result, num);
        
        if (result == 1) {
            break;
        }
    }
    return result;
}

int main() {
    // input
int arr[] = {989, 42, 24, 27};
vector<int> inputArray(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int result = findGCD(inputArray);

    // output
    cout << "GCD for all elements: " << result << endl;

    return 0;
}
