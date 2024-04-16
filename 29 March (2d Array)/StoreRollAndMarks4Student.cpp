//  Write a program to store roll number and marks obtained by 4 students side by side in a matrix 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int numStudents = 4;
    const int numSubjects = 2; // Assuming 2 subjects for simplicity

    // Matrix to store roll numbers and marks
    vector<vector<int>> studentMatrix(numStudents, vector<int>(numSubjects + 1));

    // Input roll numbers and marks
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> studentMatrix[i][0]; // Storing roll number in the first column
        for (int j = 1; j <= numSubjects; ++j) {
            cout << "Enter marks for subject " << j << " for student " << i + 1 << ": ";
            cin >> studentMatrix[i][j];
        }
    }

    // Display the matrix
    cout << "\nRoll Number\tSubject 1\tSubject 2\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << studentMatrix[i][0] << "\t\t";
        for (int j = 1; j <= numSubjects; ++j) {
            cout << studentMatrix[i][j] << "\t\t";
        }
        cout << endl;
    }

    return 0;
}
                        /*  Output
                            Enter roll number for student 1: 1323445
                            Enter marks for subject 1 for student 1: 94
                            Enter marks for subject 2 for student 1: 95
                            Enter roll number for student 2: 1323447
                            Enter marks for subject 1 for student 2: 85
                            Enter marks for subject 2 for student 2: 86
                            Enter roll number for student 3: 1323448
                            Enter marks for subject 1 for student 3: 87
                            Enter marks for subject 2 for student 3: 89
                            Enter roll number for student 4: 1323450
                            Enter marks for subject 1 for student 4: 90
                            Enter marks for subject 2 for student 4: 92

                            Roll Number     Subject 1       Subject 2
                            1323445         94              95
                            1323447         85              86
                            1323448         87              89
                            1323450         90              92
                        */