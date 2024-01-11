// pattern of a pyramid using nested loop.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows you want: ";
    cin>>n;
    for (int i = 0;i<n;i++)
    
    {
        for(int j=n;j>i+1;j--)
        {
            cout<<" ";
        }for(int k=0;k<= i*2;k++)
        {
            cout<<"✺";
        }
        
        cout<<"\n";
    }
    return 0;
    }