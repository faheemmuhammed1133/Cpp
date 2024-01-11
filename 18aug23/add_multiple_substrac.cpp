#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "enter the value for a" << "for b";
    cin >> a >> b;
    cout << "Sum = " << (a + b) << endl;

    if (a > b) {
        cout << "Subtraction = " << (a - b) << endl;
    } else {
        cout << "Subtraction = " << (b - a) << endl;
    }

    cout << "Multiplication = " << (a * b) << endl;

    if (a > b) {
        cout << "div=" << ((float)a / b) << endl;
    } else{
        cout << "div=" << ((float)b / a)<< endl;
    }

    return 0;
}