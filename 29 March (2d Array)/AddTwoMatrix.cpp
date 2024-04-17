                //Write a program to add two matrices

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> addMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();

    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    return result;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const vector<int>& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

 main() {
    // Example matrices
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> B = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    cout << "Matrix A:\n";
    printMatrix(A);
    cout << "Matrix B:\n";
    printMatrix(B);

    vector<vector<int>> sum = addMatrices(A, B);

    cout << "Sum of matrices A and B:\n";
    printMatrix(sum);

}
                                    /*  Output
                                        Matrix A:
                                        1 2 3 
                                        4 5 6 
                                        7 8 9 
                                        Matrix B:
                                        9 8 7 
                                        6 5 4 
                                        3 2 1 
                                        Sum of matrices A and B:
                                        10 10 10 
                                        10 10 10
                                        10 10 10
                                    */