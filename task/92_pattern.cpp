#include<iostream>
using namespace std;
int main() {
    int n = 5; // Assuming a 5x5 pattern

    // Display the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           
            if (i == 0 || i == n - 1 || j == 0 || j == n - 2){ //||i==2&&j==5||i==3&&j==5||i==4&&j==5) {//logical or is used to specify first and last coloumn.
               cout << "*";
            } else {
               cout << " ";//to print blank space in between middle coloumns.
            }
        }
        // Move to the next line after each row
    cout << "\n";
    }

    return 0;
}
