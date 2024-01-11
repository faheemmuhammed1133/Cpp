// sum all numbers upto n 
#include<iostream>
using namespace std;
int main(){
    int x=0, sum =0;
    cout<<"enter the value till u want sum: ";
    cin>>x;
    for (int i=1;i<=x;i++){
        
        sum = sum+i;
        if(i==1){
            cout<<"sum of "<<i<<" natural number is "<<sum<<"\n";
       }else{
         cout<<"sum of "<<i<<" natural numbers is "<<sum<<"\n";
       }
    }
    return 0;
}