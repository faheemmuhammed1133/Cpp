// programme to seperate odd and even in array.
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int Array[size],evenArray[size],oddArray[size];// array to store whole, seperate .

    int Counteven = 0, Countodd = 0; // Count of even and odd.
   
    // Input elements into the originalArray
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> Array[i];
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < size; i++)
    {
        cout << Array[i] << " ";
    }
    cout << "|";
    cout << endl;

    // Separate odd and even numbers into separate arrays
    for (int i = 0; i < size; i++)
    {
        if (Array[i] % 2 == 0)
        {
            evenArray[Counteven] = Array[i];
            Counteven++;
        }
        else
        {
            oddArray[Countodd] = Array[i];
            Countodd++;
        }
    }

    // Display even numbers
    cout << "Even numbers: |";
    for (int i = 0; i < Counteven; i++)
    {
        cout << evenArray[i] << " ";
    }
    cout << "|" << endl;

    // Display odd numbers
    cout << "Odd numbers: |";
    for (int i = 0; i < Countodd; i++)
    {
        cout << oddArray[i] << " ";
    }
    cout << "|" << endl;

    return 0;
}