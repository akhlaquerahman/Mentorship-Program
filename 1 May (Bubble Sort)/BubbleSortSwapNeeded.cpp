                        //How much maximum swap are needed to sort array of length 6.

#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[6] = {6,1,2,3,4,5}; // Array to be sorted
    int swapCount = 0; // Initialize swap count

    // Bubble sort algorithm
    for (int i = 0; i < 6 - 1; ++i) {
        for (int j = 0; j < 6 - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                
                swap(arr[j],arr[j+1]);      // Swap arr[j] and arr[j + 1]
                
                swapCount++;        // Increment swap count
            }
        }
    }

    
    cout << "Sorted array:";            // Print sorted array
    for (int i = 0; i < 6; ++i) {
        cout << " " << arr[i];
    }

    
    cout <<endl<< "Total swaps needed: " << swapCount <<endl;       // Print total number of swaps

    return 0;
}
                        /*  Output
                            Sorted array: 1 2 3 4 5 6
                            Total swaps needed: 5
                        */