
#include <iostream>
using namespace std;

int main(){
    int j,rows,k,i; // declare variables
    cout<<"Enter the number of rows: "; // prompt user for input
    cin>>rows; // store input in rows variable

    for(i=1,k=0;i<=rows;i++,k=0){ // loop through rows
        for(j=1;j<=rows-i;j++){ // loop through columns
            cout<<" "; // print space
        }
        while (k != 2 * i -1) // loop through stars
        {
            cout<<"*"; // print star
            k++; // increment k
        }
        cout<<endl; // print newline
    }
    return 0; // exit program
}
        
