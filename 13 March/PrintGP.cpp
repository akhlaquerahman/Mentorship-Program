#include <iostream>

using namespace std;

main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int term = 1;
    int ratio = 2;

    cout << "Geometric Progression up to " << n << " terms:\n";

    for(int i = 0; i < n; ++i) {
        cout << term;
        term *= ratio; 
        if(i < n - 1)
            cout << ", ";
    }

}