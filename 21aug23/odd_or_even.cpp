#include <iostream>
using namespace std;
int main() {
    int n; 
    cout<<"enter a number to check wheather it is odd or even: ";
    cin>>n;
    if (n%2==0){
        cout<<"\nthe given number "<<n<<" is an Even Number";
}else{
    cout<<"\nthe given number "<<n<<" is an Odd Number";}
    return 0;}