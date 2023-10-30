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
    int arr[20] = {34, 7, 23, 32, 5, 62, 9, 32, 50, 21, 8, 92, 34, 6, 72, 54, 8, 23, 17, 4}; 
    int max, min; 

    findMaxMin(arr, max, min);

    cout << "Maximum value: " << max << endl; 
    cout << "Minimum value: " << min << endl; 

    return 0; 
}