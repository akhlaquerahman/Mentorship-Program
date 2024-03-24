#include <iostream>
using namespace std;
int main() {
    int marks[5] = {75, 20, 45, 60, 30};

    for (int i = 0; i < 5; i++) {
        if (marks[i] < 35) {
            cout << "Roll number of student with mark less than 35: " << i << endl;
        }
    }

    return 0;
}
