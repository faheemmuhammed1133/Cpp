#include <iostream>
using namespace std;
#include <string>
int main() {
    int n,i,a,b;
    
    cout<<"enter the length of array ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter element for array ";
     cin>>a;
     arr[i]=a;

    }
    cout<<"\nenter an element to find ";
    cin>>b;
    for(i=0;i<n;i++){
        if(arr[i] == b)

        {cout<< "\nelement found at index "<< i<<"\n";}
        
          else{
            cout<<"\nnot found\n";
        }

        }

        return 0;
    }

    

