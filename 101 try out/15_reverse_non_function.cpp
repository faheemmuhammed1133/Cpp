// reversing a string without using reverse function.
#include<iostream>
using namespace std;
int main(){
    string x,rx;// declare variables for reversing and getting input  of datatype string.
    cout <<"enter a string to reverse: ";
    getline(cin,x);
    // code identifies the last letter(then loop until first) and add it to the reversed(rx) string using foor loop  
    for(int i=x.length();i>=0;i--){
        rx = rx+x[i];// loop helps in adding again and again
    }
    cout<<"\nreverse of the entered string is : "<<rx;// final result.
}
