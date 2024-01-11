#include <iostream>
#include <string>

using namespace std;

int main() {
  // Get the input string
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  // Reverse the string
  string reversedString;
  for (int i = str.length() - 1; i >= 0; i--) {
    reversedString = reversedString + str[i];
  }

  // Print the reversed string
  cout << "The reversed string is " << reversedString << endl;

  return 0;
}