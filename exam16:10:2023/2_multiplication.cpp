// to print multi table of given number from 1-10.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an integer to get multiplication table :";
    cin>>n;
    cout<<"\nhere is your multiplication table of "<<n<<":\n";
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}