//program to find smallest element in an array
#include<iostream>
using namespace std;
int main(){
    int x,k=99999;
    cout<<"how many number you want to add in array? ";
    cin>>x;
    int n[x];
    for(int i=0;i<x;i++){
        cout<<"\nenter "<<i+1<<"th number:";
        cin>>n[i];
        if(k>n[i]){
            k=n[i];
        }
    }
    cout<<"smallest number in array is "<<k<<"\n";
    return 0;
    }