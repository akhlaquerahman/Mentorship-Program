    //Write a program to print the transpose of the matrix entered by the user and store it in a new matrix. 

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> transpose(cols, vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
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
    int rows, cols;

    // Get the dimensions of the matrix from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input matrix elements from the user
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Calculate the transpose of the matrix
    vector<vector<int>> transpose = transposeMatrix(matrix);

    // Output the original and transpose matrices
    cout << "Original Matrix:\n";
    printMatrix(matrix);
    cout << "Transpose Matrix:\n";
    printMatrix(transpose);

    return 0;
}
                            /*  Output
                                Enter the number of rows: 2
                                Enter the number of columns: 3
                                Enter the elements of the matrix:
                                Enter element [0][0]: 1
                                Enter element [0][1]: 2
                                Enter element [0][2]: 3
                                Enter element [1][0]: 4
                                Enter element [1][1]: 5
                                Enter element [1][2]: 6
                                Original Matrix:
                                1 2 3
                                4 5 6
                                Transpose Matrix:
                                1 4
                                2 5
                                3 6
                            */