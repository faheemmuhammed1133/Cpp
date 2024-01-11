// array of strings - alphabetical order

#include <iostream>
using namespace std;
string toupper(string a)
{
    string n;
    for(int i = 0 ; i < a.length() ; i++)
    {
    char c = a[i];
    n += toupper(c);
    }
    return n;
}

int main()
{
    int n;
    string temp;
    cout<<"No. of string you want to enter : ";
    cin>>n;
    string arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        switch(i){
        case 0:
            cout<<"Enter 1st Word : ";
            cin>>arr[i];
            continue;

        case 1:
            cout<<"Enter 2nd Word : ";
            cin>>arr[i];
            continue;
        case 2:
            cout<<"Enter 3rd Word : ";
            cin>>arr[i];
            continue;
        default :
            break;
        }
        cout<<"Enter "<<i+1<<"th word : ";
        cin>>arr[i];
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            if(toupper(arr[i])>toupper(arr[j]))
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"[";

    for(int i = n-1 ; i>=0 ; i--){
            cout<<arr[i]<<" | ";
    }
    cout<<"]";
    return 0;
}