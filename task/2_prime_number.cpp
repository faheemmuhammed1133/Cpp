#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<=0){
        cout<<"not prime\n";
        return -1;
    }
    bool isPrime = true;
    
    // Iterate over all numbers from 2 to the square root of n
    for (int i = 2; i <= n/2; i++){  /*sqrt(n); i++){ */
        // If n is divisible by any number from 2 to its square root, it is not prime
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    // If n is divisible by no number from 2 to its square root, it is prime
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}