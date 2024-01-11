// arrange array in alphabetic order.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cout<<"enter number of elements you want to enter: ";
    cin>>x;
    string array[x];
    //input section.
    cout << "Enter "<<x<<" strings:" << "\n";
    for (int i = 0; i < x; i++) {
        cout << "element " << i +1 << " of string: ";
        cin>> array[i];// read a word of user input.
    }

    // Sort strings in alphabetical order and number order.
    sort(array, array + x);//to sort from start of array to upto array + x(mention range)
    cout<<"\nstrings in alphabetic order are:\n";
    for (int i = 0; i < x; i++) {
        cout << array[i] << "\n";   
    }
return 0;
}