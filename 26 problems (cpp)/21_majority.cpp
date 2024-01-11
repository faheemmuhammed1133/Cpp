//program to find majority element in an array
#include<iostream>
using namespace std;
int main(){
    int x,k=0;
    cout<<"how elements you want to add in array: ";
    cin>>x;
    int arr[x],n[x];
    for(int i=0;i<x;i++){
        cout<<"\nenter the "<<i+1<<"th number of array:";
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        k=0;
     for(int j=0;j<x;j++){
        
            if(arr[i]==arr[j]){
                k++;
            }
        }
        n[i]=k;
        if(n[i]>x/2){
            cout<<arr[i]<<" is the majority element \n";
            return 0;
        }
    } 
    cout<<"no majority element found \n";
return 0;
}