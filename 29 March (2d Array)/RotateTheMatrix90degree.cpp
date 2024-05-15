        //Write a program to rotate the matrix by 90 degrees clockwise. [Leetcode 48] 

#include <iostream>

using namespace std;

const int MAX = 10;

 main() {
    int n;

    cout << "Enter the number of rows/columns of the square matrix: ";
    cin >> n;

    int mat[MAX][MAX];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int temp[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][n - 1 - i] = mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = temp[i][j];
        }
    }

    cout << "Matrix after rotating by 90 degrees clockwise:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

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