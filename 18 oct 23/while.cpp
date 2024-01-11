#include<iostream>
using namespace std;
int main(){
    float n,count=0,sum=0;
    while(n!=0){
        cout<<"enter a number to find average";
        cin>>n;
        sum+=n;
        count++;
    }
    count--;
    cout<<sum/count;
}