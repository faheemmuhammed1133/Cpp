#include<iostream>
using namespace std;
int main(){
    start:
    int n;
    cout<<"enter odd no of rows you want ";
    cin>>n;
    if(n%2==0){
        cout<<"invalid entry\n";
        goto start;
    }
    //upper layer.
    for(int i=1;i<=n/2+1;i++){
        //space
        for(int j=n/2+1;j>i;j--){
            cout<<" ";
        }
        //increament
        for(int j=i;j<=2*i-1;j++){
            cout<<j;
        }
        //decreament
        for(int j=2*i-2;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    //lower layer
    for(int i=n/2;i>=1;i--){
        //space
        for(int j=n/2;j>=i;j--){
            cout<<" ";
        }
        //increament
        for(int j=i;j<=2*i-1;j++){
            cout<<j;
        }
        //decreament
        for(int j=2*i-2;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}