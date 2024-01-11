#include<iostream>
using namespace std;
int main(){
    int n,f,u;
    cout<<"enter a number you want multpilication table of ";
    cin>>n;
    cout<<"enter from which number you want table of "<<n;
    cin>>f;
    cout<<"enter upto which number you want table of "<<n;
    cin>>u;
    for(int i=f;i<=u;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
    }
    return 0;
}