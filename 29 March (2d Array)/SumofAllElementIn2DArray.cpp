        //Write a program to print sum of all the elements of a 2D matrix.

#include <iostream>
#include <vector>

using namespace std;

int calculateMatrixSum(const vector<vector<int>>& matrix) {
    int sum = 0;
    for (const vector<int>& row : matrix) {
        for (int element : row) {
            sum += element;
        }
    }
    return sum;
}

 main() {
    // Example 2D matrix
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Calculate the sum of all elements
    int sum = calculateMatrixSum(matrix);

    // Output the result
    cout << "Sum of all elements of the matrix: " << sum << endl;

    
}
                            /*  Output
                                Sum of all elements of the matrix: 45
                            */