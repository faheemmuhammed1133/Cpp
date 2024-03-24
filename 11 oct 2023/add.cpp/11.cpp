// negative positive or 0
#include<iostream>
using namespace std;
int main() {
    float a;
    cout<<"Enter any number to check if it -ve ,+ ve or neutral ";
    cin>>a;
    if(a<0){
        cout<<a<<" is negative"<<endl;
    }else if(a==0){
        cout<<a<<" is neutral"<<endl;
    }else{
        cout<<a<<" is positive "<<endl;
    }
    }