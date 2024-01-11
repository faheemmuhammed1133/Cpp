// pascal's triangle. nested loop
#include<iostream>
using namespace std;
int main(){
    agn:
    int x,p;
    cout<<" please enter desired number of rows: ";
    cin>>x;
    if(x>0){
    for(int i=0;i<x;i++){
        p=1;
        for(int j=x;j>i+1;j--){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<p<<" ";
            p= p*(i-k)/(k+1);
        }
        cout<<"\n";
    }
    }else{
        goto agn;
    }
    return 0;
}