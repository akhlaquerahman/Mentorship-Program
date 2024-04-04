//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <iostream>

using namespace std;

int main() {
    int x, y;

    // Input coordinates of the point
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    // Check if the point lies on the x-axis, y-axis, or at the origin
    if (x == 0 && y == 0) {
        cout << "The point is at the origin (0, 0)." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else {
        cout << "The point does not lie on the x-axis, y-axis, or at the origin." << endl;
    }

    return 0;
}

                        /*  Output
                        Enter the x-coordinate: 0
                        Enter the y-coordinate: 1
                        The point lies on the y-axis.

                        Enter the x-coordinate: 0 
                        Enter the y-coordinate: 0
                        The point is at the origin (0, 0).
                        */