#include <iostream>

using namespace std;

int main() {
   string input;
   char c;
    // Input character from the user
    cout << "Enter a character: ";
    cin >> input;


    // Check if the entered character is an alphabet
    if (input.length() == 1 && ((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z'))) {
        c=input[0];
        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            cout << c << " is a vowel." << "\n";
        } else {
            cout << c << " is a consonant." << "\n";
        }
    } else {
        cout << "Invalid input. Please enter a single alphabet character.\nfor ex:- like \'a' or \'b' or \'c'...etc'" << "\n";
    }

    return 0;
}
