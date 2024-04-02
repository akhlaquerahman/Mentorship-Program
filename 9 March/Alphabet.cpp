                           //Write a program to check whether a character is an alphabet or not.

#include <iostream>
using namespace std;
main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    // Check if the character is an alphabet (uppercase or lowercase)
    if (character >= 'A' && character <= 'Z') {
        cout << "The character is Capital an ALPHABET.";
    }
    else if(character >= 'a' && character <= 'z'){
        cout << "The character is small an alphabet.";
    }
     else {
        cout << "The character is not an alphabet." <<endl;
    }
}            
                            /*Output
                            Enter a character: A
                            The character is Capital an ALPHABET.

                            Enter a character: a
                            The character is small an alphabet.
                            */             