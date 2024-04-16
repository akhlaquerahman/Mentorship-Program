        //Write a program to rotate the matrix by 90 degrees clockwise. [Leetcode 48] 

#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; ++i) {
        (matrix[i].begin(), matrix[i].end());
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const vector<int>& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate(matrix);

    cout << "Matrix after rotating 90 degrees clockwise:\n";
    printMatrix(matrix);

    return 0;
}

                                    /*  Output
                                        Original Matrix:
                                        1 2 3 
                                        4 5 6 
                                        7 8 9 
                                        Matrix after rotating 90 degrees clockwise:
                                        1 4 7 
                                        2 5 8 
                                        3 6 9
                                    */    