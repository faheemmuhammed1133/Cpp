// power of a number using loop
#include<iostream>
using namespace std;
int main(){
int x,k,l=1;
cout<<"base and exponent: ";
cin>>x>>k;
    for(int i=1;i<=k;i++){
      l =l*x;
      cout<<l<<"\n";
    }
    
    return 0;
    }