//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line

#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;

    cout << "Enter coordinates for point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates for point 2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates for point 3 (x3 y3): ";
    cin >> x3 >> y3;

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        cout << "The three points are collinear." << endl;
    } else {
        cout << "The three points are not collinear." << endl;
    }

    return 0;
}
