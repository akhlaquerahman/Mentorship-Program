        //Write a program to print sum of all the elements of a 2D matrix.

#include <iostream>
using namespace std;

main() {
    int arr[4][4] = {
        {10, 20, 30, 40},
        {40, 50, 60, 70},
        {70, 80, 90, 100},
        {100, 110, 120, 130}
    };
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }

    cout << "The sum of all the elements in the matrix is: " << sum << endl;

}
                            /*  Output
                                The sum of all the elements in the matrix is: 1120
                            */