// largest among three using nested if-else.
#include<iostream>
using namespace std;
int main() {
    float a,b,c;
    cout<<"enter three numbers to check : ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is largest among "<<a<<" , "<<b<<" and "<<c;
        }else{
            cout<<c<<" is largest among "<<a<<" , "<<b<<" and "<<c;
        }
    }else if(b>c){
        if(b>c){
            cout<<b<<" is largest among "<<a<<" , "<<b<<" and "<<c;
        }else{
            cout<<c<<" is largest among "<<a<<" , "<<b<<" and "<<c;
        }
    }else{
            cout<<c<<" is largest among "<<a<<" , "<<b<<" and "<<c;
    }
    return 0;
}
