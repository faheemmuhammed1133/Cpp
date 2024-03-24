#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    bool prime=true;
    for(int i=2;i<a/2+1;i++){
        if(a%i==0){
            prime=false;
            break;
    }
    }
    if(a==1){
        cout<<"it's is a special case ";
    }else if(a<1){
        cout<<"\n "<<a<<" Is Not Prime" ;
    }
    else if (prime){
        cout<<"\n"<<a<<" is Prime";
    }else{
        cout<<"\n "<<a<<" Is Not Prime" ;
    }
}