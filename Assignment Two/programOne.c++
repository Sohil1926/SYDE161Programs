#include <iostream> 
using namespace std; 

void findMaxMin(int arr[20], int &maxValue, int &minValue ) {
    maxValue = arr[0]; 
    minValue = arr[1]; 

      for (int i = 1; i < 20; i++) {
         if(arr[i] > maxValue) {
             maxValue = arr[i]; 
         }
         if(arr[i] < maxValue) {
             minValue = arr[i]; 
         }
      }
}

int main(){ 
    int arr[20] = {12, 40, 29, 27, 3, 87, 42, 92, 65, 40, 9, 23, 78, 44, 72, 30, 58, 73, 49, 7}; 
    int max, min; 

    findMaxMin(arr, max, min);

    cout << "Maximum: " << max << endl; 
    cout << "Minimum: " << min << endl; 

    return 0; 
}