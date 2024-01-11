// *****
// *  *
// *  *
// *  *
// *****
#include<iostream>
using namespace std;
int main() {
   int x;
   cout<<"enter number of you raws you want to print pattern: ";
   cin>>x;
   for(int i=0;i<x;++i) {
    for (int j =0 ;j <x;++j){
        
       if(i==0 || i==x-1 ||j==0 || j==x-2){
        cout<<"✺";
       }else{
        cout<<" ";
       }
       }
       cout<<"\n";
   }
   return 0;
}