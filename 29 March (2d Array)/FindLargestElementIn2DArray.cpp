                //Write a C++ program to find the largest element of a given 2D array of integers

#include <iostream>
#include <vector>

using namespace std;

int findLargestElement(const vector<vector<int>>& arr) {
    int maxElement = arr[0][0];
    for (const vector<int>& row : arr) {
        for (int element : row) {
            if (element > maxElement) {
                maxElement = element;
            }
        }
    }
    return maxElement;
}

int main() {
    // Example 2D array
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Find the largest element
    int largestElement = findLargestElement(arr);

    // Output the result
    cout << "Largest element in the 2D array: " << largestElement << endl;

    
}
                        /*  output
                            Largest element in the 2D array: 9
                        */
