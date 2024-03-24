//largest of three
#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter 3 num to check which is largest ";
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<a<<" is the largest ";
    }else if(b>a&&b>c){
        cout<<b<<" is the largest ";
    }else{
        cout<<c<<" is the largest";
    }
}