#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout<<"enter number of rows and columns you want:";
    cin>>r>>c;
    int x[r][c];
    // input
    for(int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j) {
            cout<<"enter element "<<i+1<<","<<j+1<<" of array";
            cin>>x[i][j];
        }
    }
    // Calculate the sum of elements in each row
    for (int i = 0; i < r; ++i) {
        int rowSum = 0; // Initialize the sum for each row

        // Iterate through each column in the current row
        for (int j = 0; j < c; ++j) {
            rowSum += x[i][j]; // Add the element to the row sum
        }
        // Print the sum for the current row
       cout << "Sum of elements in row " << i + 1 << ": " << rowSum <<"\n";
    }
    return 0;
}
