//  Write a program to store roll number and marks obtained by 4 students side by side in a matrix 

#include <iostream>
using namespace std;

main() {
    int matrix[4][2];    

    int i, j;

    for (i = 0; i < 4; i++) {
        cout << "\n Enter Roll of Student [" << i + 1 << "]";
        cin >> matrix[i][0];
        cout << "\n Enter Mark of Student [" << i + 1 << "]";
        cin >> matrix[i][1];
    }
    
    for (i = 0; i < 4; i++) {
        cout << "\n Roll No :  " << matrix[i][0] << "   Marks : " << matrix[i][1];
    }

}
                        /*  Output
                            Enter Roll of Student [1]2

                            Enter Mark of Student [1]3

                            Enter Roll of Student [2]6

                            Enter Mark of Student [2]5

                            Enter Roll of Student [3]1

                            Enter Mark of Student [3]7

                            Enter Roll of Student [4]9

                            Enter Mark of Student [4]2

                            Roll No :  2   Marks : 3
                            Roll No :  6   Marks : 5
                            Roll No :  1   Marks : 7
                            Roll No :  9   Marks : 2
                        */