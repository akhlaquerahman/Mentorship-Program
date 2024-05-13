    //Write a program to print the transpose of the matrix entered by the user and store it in a new matrix. 

#include <iostream>

using namespace std;

main() {
    int m, n;

    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int matrix[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}


                        /*
                                OUTPUT:- 
                        Enter the number of rows: 3
                        Enter the number of columns: 2
                        Enter the elements of the matrix:
                        10 20
                        30 40
                        50 60
                        The transposed matrix is:
                        10 20 50 
                        30 40 60 
*/                             