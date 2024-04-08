            // write a function to calculate the Combination and Permutation.

#include <iostream>
using namespace std;
// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;              //factorial formula
    }
    return fact;
}

// Function to calculate combination (nCr)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));   //nCr=n!/(r!(n-r)!)
}

// Function to calculate permutation (nPr)
int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);                    // nPr=n!/(n-r)!
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "Combination (nCr): " << combination(n, r) <<endl;
    cout << "Permutation (nPr): " << permutation(n, r) <<endl;

    return 0;
}

                                    /* OUTPUT
                                        Enter the value of n: 5
                                        Enter the value of r: 2
                                        Combination (nCr): 10
                                        Permutation (nPr): 20 
                                    */