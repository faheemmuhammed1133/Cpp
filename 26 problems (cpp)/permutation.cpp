#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

void generatePermutations(string str, int l, int r, int& count)
{
    if (l == r)
    {
        cout << count << ": " << str << endl;
        count++;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str[l], str[i]);
            generatePermutations(str, l + 1, r, count);
            swap(str[l], str[i]);
        }
    }
}



int main()
{
    string input;
    cout<< "Enter the string: ";
    cin>> input;

    int length= input.length();
    cout<<endl<<"Length of the string: "<< length<< endl;

    cout<<endl<< "Possible permutations in the string: "<< fact(length) << endl;

    //int a=1;

    int count = 1;

    cout <<endl<< "Permutations:" << endl;
    generatePermutations(input, 0, input.length() - 1, count);

    return 0;

    
}