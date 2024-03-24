#include<iostream>
using namespace std;
int main(){
    int a,s=0;
    cout<<"enter a number ;";
    cin>>a;
    
    for(int i=0;i<=a;i++){
        int k=0;
        if(i>1){
        for(int j=2;j<i;j++){
            if(i%j==0){
                k++;
            }
        }
        if(k==0){
            cout<<i<<" + ";
            s = s + i;
        }
        }
    }
    cout<<"\nsum of prime numbers from 1 to "<<a<<" = "<<s<<endl;
}