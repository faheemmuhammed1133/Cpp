// check if string is palindrome.
#include<iostream>
#include <string>
using namespace std;
int main() {
    string x;
    bool pldrm=true;
    cout<<"enter a string : ";
    cin>>x; 
    int l=x.length();
    for(int i=0;i<l;i++){
        if(x[i]!=x[l-i-1]){
            pldrm=false;
            break;
        }     
    }
    if (pldrm){
            cout<<x<<" is a palindrome ";
        }
        else{
            cout<<x<<" is not a palindrome ";
        }
        return 0;
}
        