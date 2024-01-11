#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; i++) {// looping to add function.
    sum = sum + i;
  }

  cout << "The sum of all numbers from 1 to " << n << " is " << sum << "\n";

  return 0;
}