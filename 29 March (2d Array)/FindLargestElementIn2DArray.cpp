                //Write a C++ program to find the largest element of a given 2D array of integers

#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int largest = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    cout << "The largest element in the matrix is: " << largest << endl;

}
                        /*  output
                            Largest element in the 2D array: 9
                        */
