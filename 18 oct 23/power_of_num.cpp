#include<iostream>
using namespace std;
int power(int x,int n){
    int y=1;
    for(int i=1;i<=n;i++){
        y = y*x;
    }
    return y;

}
int main(){
    int base,pow;
    cout<<"enter base and power :";
    cin>>base>>pow;
    cout <<power(base,pow)<<endl;
}