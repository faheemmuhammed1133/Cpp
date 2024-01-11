
#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"enter num of rows needed";
    cin>>x;
    for (int i=-1;i<(x-1);i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        
       for(int k=x;k >= 2 * i -1;k--) // loop through stars
        {
            cout<<"*"; // print star
           
        }
        cout<<endl; // make newline
    }
        return 0;
        }