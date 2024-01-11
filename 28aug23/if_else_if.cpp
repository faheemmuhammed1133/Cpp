#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"value of x ";
    cin>>x;
    if(x>0){
        cout<<"x is positive ";
    }else if(x<0){
        cout<<"x is negative ";
    }else{
        cout<<"x is nutral / equal to 0 ";
    }
}