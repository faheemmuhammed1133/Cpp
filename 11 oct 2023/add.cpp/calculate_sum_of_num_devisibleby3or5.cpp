#include<iostream>
using namespace std;
int main(){
    int a,s=0;
    cout<<"enter a number till: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        if(i%5==0||i%3==0){
            s+=i;
        }
    }
    cout<<"sum of numbers = "<<s<<"\n";
}