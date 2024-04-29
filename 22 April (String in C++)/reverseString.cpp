//Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.

#include <iostream>
#include <string>
#include <algorithm> // for reverse function
using namespace std;

int main() {
    string input;
    cout << "Enter a string of length greater than 5: ";
    getline(cin, input);

    if (input.length() <= 5) {
        cout << "Please enter a string of length greater than 5." << endl;
        return 1;
    }

    // Reverse the substring from position 2 to 5
    reverse(input.begin() + 2, input.begin() + 6);

    cout << "String after reversing substring from position 2 to 5: " << input << endl;

    return 0;
}
                        /*  Output
                            Enter a string of length greater than 5: Akhlaque
                            String after reversing substring from position 2 to 5: Akqalhue
                        */