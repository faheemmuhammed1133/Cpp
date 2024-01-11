//reverse an array in place.
#include<iostream>
using namespace std;
int main() {
    string x;
    cout<<"enter an array: ";
    cin>>x;
    int l=x.length();
     cout << "\n\tReversed Array: \n";
    for (int i = l-1; i >= 0;i--){
        cout<<x[i];
    }

    return 0;
}