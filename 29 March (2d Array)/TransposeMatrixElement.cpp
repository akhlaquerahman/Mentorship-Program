            //Write a program to change the given matrix with its transpose. [Leetcode 867]

#include <iostream>
#include <vector>

using namespace std;

void transpose(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Swap elements along the diagonal
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
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

    transpose(matrix);

    cout << "Matrix after transposition:\n";
    printMatrix(matrix);

    return 0;
}
                            /*  Output
                                Original Matrix:
                                1 2 3 
                                4 5 6 
                                7 8 9 
                                Matrix after transposition:
                                1 4 7 
                                2 5 8 
                                3 6 9 
                            */