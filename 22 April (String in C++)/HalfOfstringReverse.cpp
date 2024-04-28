                //Input a string of even length and reverse the first half of the string.

#include <iostream>
#include <string>
#include <algorithm> // for reverse function
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int n = input.length();

    cout<<"Size Of String: "<<n<<endl;

    // Reverse the first half of the string
    reverse(input.begin(), input.begin() + n / 2);

    cout << "String after reversing the first half: " << input << endl;

    return 0;
}
                            /*  Output
                                Enter a string: Akhlaque
                                Size Of String: 8
                                String after reversing the first half: lhkAaque
                            */