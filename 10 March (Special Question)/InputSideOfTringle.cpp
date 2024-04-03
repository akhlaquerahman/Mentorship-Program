//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

#include <iostream>

using namespace std;

 main() {
    int side1, side2, side3;

    // Input sides of the triangle
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Check for equilateral, isosceles, or scalene
    if (side1 < (side2+side3) && side2 < (side1+side3) && side3 < (side1+side2)) {
        cout << "It's a triangle." << endl;
    }
     else {
        cout << "It's a not Triangle." << endl;
    }

}
                                /*  Output.
                                    
                                    Enter the length of side 1: 4
                                    Enter the length of side 2: 5
                                    Enter the length of side 3: 3
                                    
                                    It's a triangle.
                                */